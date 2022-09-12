using System.Collections.Generic;
using UnityEngine;

namespace ClothesShopSim
{
    public class InventoryController : MonoBehaviour
    {
        public static InventoryController Instance { get; private set; }

        [SerializeField] private ItemInfoHolder selectedItemInfoHolder;

        [SerializeField] private GameObject inventoryUI;

        [SerializeField] private GameObject inventoryContent;
        [SerializeField] private GameObject inventoryItemDisplayPrefab;

        public List<InventoryItemDisplay> currentDisplays = new List<InventoryItemDisplay>();

        private static PlayerInventory inventory;

        private void Awake()
        {
            if (Instance && Instance != this) Debug.LogError("Inventory controller exists more than once but is a Singleton!");
            else Instance = this;
        }

        private void Start()
        {
            inventory = FindObjectOfType<PlayerInventory>();

            GenerateInventoryUI();
        }

        void Update()
        {
            if (Input.GetKeyDown(KeyCode.I))
            {
                inventoryUI.SetActive(!inventoryUI.activeInHierarchy);

                if (inventoryUI.activeInHierarchy) GenerateInventoryUI();
            }
        }

        private void GenerateInventoryUI()
        {
            // clear previous displays
            while (currentDisplays.Count > 0)
            {
                Destroy(currentDisplays[0].gameObject);
                currentDisplays.RemoveAt(0);
            }

            // get inventory
            foreach (var item in inventory.Inventory)
            {
                GenerateDisplayForItem(item);
            } 
        }

        private void GenerateDisplayForItem(ItemInfo item)
        {
            var d = Instantiate(inventoryItemDisplayPrefab, inventoryContent.transform)
                .GetComponent<InventoryItemDisplay>();

            d.SetDisplayedItem(item);
            d.UpdateUI();

            currentDisplays.Add(d);
        }

        // public void TrySelectItem(ItemInfo item)
        // {
        //     if (selectedItemInfoHolder.ItemInfo.Equals(item))
        //     {
        //         // Sell if near shopkeeper
        //         if (Shopkeeper.Instance.IsActive)
        //         {
        //             if (selectedItemInfoHolder != null && selectedItemInfoHolder.ItemInfo.OutfitID != OutfitID.None)
        //             {
        //                 for (int i = 0; i < inventory.Inventory.Count; i++)
        //                 {
        //                     if (inventory.Inventory[i].OutfitID == selectedItemInfoHolder.ItemInfo.OutfitID)
        //                     {
        //                         Shopkeeper.Instance.TransactionSucceed();
        //
        //                         break;
        //                     
        //                     }
        //                     else
        //                     {
        //                         Shopkeeper.Instance.TransactionFailed();
        //                     }
        //                 }
        //
        //
        //                 // if (inventory.Inventory.Contains(selectedItem))
        //                 // {
        //                 //     Shopkeeper.Instance.TransactionSucceed();
        //                 // }
        //                 // else
        //                 // {
        //                 //     Shopkeeper.Instance.TransactionFailed();
        //                 // }
        //             }
        //             else
        //             {
        //                 Debug.LogError("Invalid selectedItemInfo.");
        //             }
        //         }
        //
        //         return;
        //     }
        //
        //     // selectedItemInfoHolder.ItemInfo = item;
        //
        //     // selectedItemInfoHolder.ItemInfo.SetItemInfo(item);
        //
        //     GenerateInventoryUI();
        // }

        public void OnItemEquipped(ItemInfo equippedItem)
        {
            if (!inventoryUI.activeInHierarchy) return;

            GenerateInventoryUI();
        }

        public void OnItemPurchased(ItemInfo purchasedItem)
        {
            if (!inventoryUI.activeInHierarchy) return;

            GenerateInventoryUI();
        }

        public void OnItemSold(ItemInfo itemSold)
        {
            if (!inventoryUI.activeInHierarchy) return;

            GenerateInventoryUI();
        }
    }
}
