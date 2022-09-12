using UnityEngine;

namespace ClothesShopSim
{
    public enum OutfitID
    {
        None,
        OF1,
        OF2,
        OF3,
        OF4,
        OF4_B,
        OF4_C,
        OF5,
        OF6,
        OF6_B
    }

    public class AnimationSet : MonoBehaviour
    {
        [SerializeField] private OutfitID outfitID = OutfitID.None;

        /*
         * TODO: IdleFront and IdleBack animations refer to the Front and Back sides of the Character respectively.
         * However, idleForwardAnimGameObject and idleBackAnimGameObject refer to the Character moving forward and back.
         * This is confusing, since the IdleBack anim must be used while the Character is moving forward, etc.
         * Consider renaming the relative animation files.
         */
        [SerializeField] private GameObject walkRightAnimGameObject;
        [SerializeField] private GameObject walkForwardAnimGameObject;
        [SerializeField] private GameObject walkBackAnimGameObject;
        [SerializeField] private GameObject idleRightAnimGameObject;
        [SerializeField] private GameObject idleForwardAnimGameObject;
        [SerializeField] private GameObject idleBackAnimGameObject;

        public OutfitID OutfitID
        {
            get { return outfitID; }
        }

        public GameObject WalkRightAnimGameObject
        {
            get { return walkRightAnimGameObject; }
        }

        public GameObject WalkForwardAnimGameObject
        {
            get { return walkForwardAnimGameObject; }
        }

        public GameObject WalkBackAnimGameObject
        {
            get { return walkBackAnimGameObject; }
        }

        public GameObject IdleRightAnimGameObject
        {
            get { return idleRightAnimGameObject; }
        }

        public GameObject IdleForwardAnimGameObject
        {
            get { return idleForwardAnimGameObject; }
        }

        public GameObject IdleBackAnimGameObject
        {
            get { return idleBackAnimGameObject; }
        }

        private void Awake()
        {
            bool animationsValid = ValidateAnimations();
            bool outfitIDValid = ValidateOutfitID();

            if (!animationsValid)
            {
                Debug.LogError("Animations missing from AnimationSet");
            }

            if (!outfitIDValid)
            {
                Debug.LogError("OutfitID not set.");
            }
        }


        bool ValidateAnimations()
        {
            if (!walkRightAnimGameObject)
            {
                return false;
            }

            if (!walkForwardAnimGameObject)
            {
                return false;
            }

            if (!walkBackAnimGameObject)
            {
                return false;
            }

            if (!idleRightAnimGameObject)
            {
                return false;
            }

            if (!idleForwardAnimGameObject)
            {
                return false;
            }

            if (!idleBackAnimGameObject)
            {
                return false;
            }

            return true;
        }

        bool ValidateOutfitID()
        {
            if (outfitID == OutfitID.None)
            {
                return false;
            }

            return true;
        }
    }
}
