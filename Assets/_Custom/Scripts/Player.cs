// using System;
using UnityEngine;
using UnityEngine.Events;

namespace ClothesShopSim
{
    public class Player : MonoBehaviour
    {
        enum ActiveAnimation
        {
            None,
            WalkRight,
            WalkLeft,
            WalkForward,
            WalkBack,
            IdleRight,
            IdleLeft,
            IdleForward,
            IdleBack
        }

        [SerializeField] private Rigidbody2D rb;
        [SerializeField] private PlayerInventory playerInventory;
        // [SerializeField] private ItemInfoHolder selectedItemInfoHolder;
        [SerializeField] private OutfitIDEnumVariable currentOutfitId;
        [SerializeField] private AnimationSet[] animationSets = new AnimationSet[9];
        [SerializeField] private float speed = 5f;

        private UnityEvent equipSuccess;

        /*
         * TODO: IdleFront and IdleBack animations refer to the Front and Back sides of the Character respectively.
         * However, idleForwardAnimGameObject and idleBackAnimGameObject refer to the Character moving forward and back.
         * This is confusing, since the IdleBack anim must be used while the Character is moving forward, etc.
         * Consider renaming the relative animation files.
         */
        private GameObject currentWalkRightAnimGameObject;
        private GameObject currentWalkForwardAnimGameObject;
        private GameObject currentWalkBackAnimGameObject;
        private GameObject currentIdleRightAnimGameObject;
        private GameObject currentIdleForwardAnimGameObject;
        private GameObject currentIdleBackAnimGameObject;

        private AnimationSet activeAnimationSet;
        private AnimationSet previousAnimationSet;

        private ActiveAnimation activeAnimation = ActiveAnimation.None;

        private bool hitObstacleForward;
        private bool hitObstacleBack;
        private bool hitObstacleLeft;
        // private bool hitObstacleRight;

        private bool movingForward;
        private bool movingBack;
        private bool movingLeft;
        private bool movingRight;

        private void Awake()
        {
            bool animationSetsValid = ValidateAnimationSets();

            if (!animationSetsValid)
            {
                Debug.LogError("AnimationSet missing from Array");
            }
        }


        void Start()
        {
            Equip();
        }

        void FixedUpdate()
        {
            if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
            {
                rb.MovePosition(new Vector2(rb.position.x, rb.position.y + (speed * Time.fixedDeltaTime)));

                //set a flag to identify moving direction and help select correct idle animation
                movingForward = true;
                movingBack = false;
                movingLeft = false;
                movingRight = false;

                //Switch to Idle if the move is not possible due to an obstacle
                if (!hitObstacleForward)
                {
                    if (activeAnimation != ActiveAnimation.WalkForward)
                    {
                        ActivateAnimation(ActiveAnimation.WalkForward);
                    }
                }
                else
                {
                    ActivateAnimation(ActiveAnimation.IdleForward);
                }
            }
            else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
            {
                rb.MovePosition(new Vector2(rb.position.x, rb.position.y - (speed * Time.fixedDeltaTime)));

                //set a flag to identify moving direction and help select correct idle animation
                movingForward = false;
                movingBack = true;
                movingLeft = false;
                movingRight = false;

                //Switch to Idle if the move is not possible due to an obstacle
                if (!hitObstacleBack)
                {
                    if (activeAnimation != ActiveAnimation.WalkBack)
                    {
                        ActivateAnimation(ActiveAnimation.WalkBack);
                    }

                }
                else
                {
                    ActivateAnimation(ActiveAnimation.IdleBack);
                }
            }
            else if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
            {
                rb.MovePosition(new Vector2(rb.position.x - (speed * Time.fixedDeltaTime), rb.position.y));

                //set a flag to identify moving direction and help select correct idle animation
                movingForward = false;
                movingBack = false;
                movingLeft = true;
                movingRight = false;

                //Switch to Idle if the move is not possible due to an obstacle
                if (!hitObstacleLeft)
                {
                    if (activeAnimation != ActiveAnimation.WalkLeft)
                    {
                        ActivateAnimation(ActiveAnimation.WalkLeft);
                    }
                }
                else
                {
                    ActivateAnimation(ActiveAnimation.IdleLeft);
                }
            }
            else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
            {
                rb.MovePosition(new Vector2(rb.position.x + (speed * Time.fixedDeltaTime), rb.position.y));

                //set a flag to identify moving direction and help select correct idle animation
                movingForward = false;
                movingBack = false;
                movingLeft = false;
                movingRight = true;

                //Switch to Idle if the move is not possible due to an obstacle
                if (!hitObstacleForward)
                {
                    if (activeAnimation!= ActiveAnimation.WalkRight)
                    {
                        ActivateAnimation(ActiveAnimation.WalkRight);
                    }
                }
                else
                {
                    ActivateAnimation(ActiveAnimation.IdleRight);
                }
            }
            else
            {
                if (movingForward)
                {
                    if (activeAnimation != ActiveAnimation.IdleForward)
                    {
                        ActivateAnimation(ActiveAnimation.IdleForward);
                    }
                }
                else if (movingBack)
                {
                    if (activeAnimation != ActiveAnimation.IdleBack)
                    {
                        ActivateAnimation(ActiveAnimation.IdleBack);
                    }
                }
                else if (movingLeft)
                {
                    if (activeAnimation != ActiveAnimation.IdleLeft)
                    {
                        ActivateAnimation(ActiveAnimation.IdleLeft);
                    }
                }                
                else if (movingRight)
                {
                    if (activeAnimation != ActiveAnimation.IdleRight)
                    {
                        ActivateAnimation(ActiveAnimation.IdleRight);
                    }
                }
            }

        }

        private void OnCollisionEnter2D(Collision2D collision)
        {
            //set flags to identify collision direction and help select correct idle animation
            if (collision.GetContact(0).normal.y < 0)
            {
                hitObstacleForward = true;
                hitObstacleBack = false;
                hitObstacleLeft = false;
                // hitObstacleRight = false;
            }
            else if (collision.GetContact(0).normal.y > 0)
            {
                hitObstacleForward = false;
                hitObstacleBack = true;
                hitObstacleLeft = false;
                // hitObstacleRight = false;
            }
            else if (collision.GetContact(0).normal.x > 0)
            {
                hitObstacleForward = false;
                hitObstacleBack = false;
                hitObstacleLeft = true;
                // hitObstacleRight = false;
            }
            else if (collision.GetContact(0).normal.x < 0)
            {
                hitObstacleForward = false;
                hitObstacleBack = false;
                hitObstacleLeft = false;
                // hitObstacleRight = true;
            }
        }

        private void OnCollisionExit2D(Collision2D collision)
        {
            hitObstacleForward = false;
            hitObstacleBack = false;
            hitObstacleLeft = false;
            // hitObstacleRight = false;
        }



        //Set new animations corresponding to the current AnimationSet and activate IdleBack
        void Equip()
        {
            AnimationSet currentAnimationSet; //cache

            for (int i = 0; i < animationSets.Length; i++)
            {
                currentAnimationSet = animationSets[i];

                if (currentAnimationSet.OutfitID == currentOutfitId.Value)
                {
                    previousAnimationSet = activeAnimationSet;
                    activeAnimationSet = currentAnimationSet;

                    currentWalkRightAnimGameObject = currentAnimationSet.WalkRightAnimGameObject;
                    currentWalkForwardAnimGameObject = currentAnimationSet.WalkForwardAnimGameObject;
                    currentWalkBackAnimGameObject = currentAnimationSet.WalkBackAnimGameObject;
                    currentIdleRightAnimGameObject = currentAnimationSet.IdleRightAnimGameObject;
                    currentIdleForwardAnimGameObject = currentAnimationSet.IdleForwardAnimGameObject;
                    currentIdleBackAnimGameObject = currentAnimationSet.IdleBackAnimGameObject;

                    ActivateAnimation(ActiveAnimation.IdleBack);

                    break;
                }
            }
        }

        public void EquipSucceeded(ItemInfo itemInfo)
        {
            bool found = false;

            for (int i = 0; i < playerInventory.Inventory.Count; i++)
            {
                if (playerInventory.Inventory[i].OutfitID == itemInfo.OutfitID)
                {
                    currentOutfitId.Value = itemInfo.OutfitID;

                    Equip();

                    found = true;
                            
                }
            }

            if (!found)
            {
                Debug.LogError("Equip of item succeeded without having in the inventory?");
            }

            // if (playerInventory.Inventory.Contains(itemInfo))
            // {
            //     currentOutfitId.Value = itemInfo.OutfitID;
            //
            //     Equip();
            // }
            // else
            // {
            //     Debug.LogError("Equip of item succeeded without having in the inventory?");
            // }
        }

        void ActivateAnimation(ActiveAnimation activeAnimation)
        {
            //Disable the previous anim set before enabling the new one
            if (previousAnimationSet != null)
            {
                foreach (Transform childTransform in previousAnimationSet.transform)
                {
                    childTransform.gameObject.SetActive(false);
                }
            }

            switch (activeAnimation)
            {
                case ActiveAnimation.None:

                    //if there's no active animation default to IdleBack
                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(true);

                    //give the default value to the parameter
                    activeAnimation = ActiveAnimation.IdleBack;

                    break;
                case ActiveAnimation.WalkRight:

                    currentWalkRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                    currentWalkRightAnimGameObject.SetActive(true);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.WalkLeft:

                    currentWalkRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 180f, 0f);
                    currentWalkRightAnimGameObject.SetActive(true);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.WalkForward:

                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(true);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.WalkBack:

                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(true);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.IdleRight:

                    currentIdleRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(true);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.IdleLeft:

                    currentIdleRightAnimGameObject.transform.localEulerAngles = new Vector3(0f, 180f, 0f);
                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(true);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.IdleForward:

                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(true);
                    currentIdleBackAnimGameObject.SetActive(false);

                    break;
                case ActiveAnimation.IdleBack:

                    currentWalkRightAnimGameObject.SetActive(false);
                    currentWalkForwardAnimGameObject.SetActive(false);
                    currentWalkBackAnimGameObject.SetActive(false);
                    currentIdleRightAnimGameObject.SetActive(false);
                    currentIdleForwardAnimGameObject.SetActive(false);
                    currentIdleBackAnimGameObject.SetActive(true);

                    break;
            }

            this.activeAnimation = activeAnimation;
        }

        bool ValidateAnimationSets()
        {
            for (int i = 0; i < animationSets.Length; i++)
            {
                if (animationSets[i] == null)
                {
                    return false;
                }
            }

            return true;
        }
    }
}
