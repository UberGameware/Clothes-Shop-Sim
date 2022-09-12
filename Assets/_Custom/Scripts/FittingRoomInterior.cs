using TMPro;
using UnityEngine;

namespace ClothesShopSim
{
    public class FittingRoomInterior : MonoBehaviour
    {
        [SerializeField] private GameEventItemInfo itemEquipedGameEventItemInfo;
        [SerializeField] private ItemInfoHolder selectedItemInfoHolder;
        [SerializeField] private TextMeshPro transactionResult;

        private PlayerInventory playerInventory;

        private bool isActive;

        private const string PlayerTag = "Player";
        private const string EquipSucceededName = "Equip Succeeded";
        private const string EquipFailedName = "Equip Failed. Item not in Inventroy.";

        private void Awake()
        {
            playerInventory = GameObject.FindGameObjectWithTag(PlayerTag).GetComponent<PlayerInventory>();

            if (!playerInventory)
            {
                Debug.LogError("Player Inventory not found.");
            }
        }



        private void Update()
        {
            if (isActive)
            {
                if (Input.GetKeyDown(KeyCode.E))
                {

                    bool found = false;

                    if (selectedItemInfoHolder != null && selectedItemInfoHolder.ItemInfo.OutfitID != OutfitID.None)
                    {
                        for (int i = 0; i < playerInventory.Inventory.Count; i++)
                        {
                            if (playerInventory.Inventory[i].OutfitID == selectedItemInfoHolder.ItemInfo.OutfitID)
                            {
                                itemEquipedGameEventItemInfo.Raise(selectedItemInfoHolder.ItemInfo);

                                transactionResult.text = EquipSucceededName;

                                found = true;
                            
                            }
                        }

                        if (!found)
                        {
                            transactionResult.text = EquipFailedName;
                        }

                        // if (playerInventory.Inventory.Contains(selectedItemInfo))
                        // {
                        //     itemEquipedGameEventItemInfo.Raise(selectedItemInfo);
                        //
                        //     transactionResult.text = EquipSucceededName;
                        // }
                        // else
                        // {
                        //     transactionResult.text = EquipFailedName;
                        // }

                        transactionResult.gameObject.SetActive(true);
                    }
                    else
                    {
                        Debug.LogError("Invalid selectedItemInfo.");
                    }
                }
            }
        }

        private void OnTriggerStay2D(Collider2D collision)
        {
            isActive = true;
        }

        private void OnTriggerExit2D(Collider2D collision)
        {
            isActive = false;

            transactionResult.gameObject.SetActive(false);
        }
    }
}
