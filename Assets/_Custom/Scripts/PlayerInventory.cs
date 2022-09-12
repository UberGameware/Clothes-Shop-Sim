using System.Collections.Generic;
using TMPro;
using UberGameware;
using UnityEngine;
using UnityEngine.Events;

namespace ClothesShopSim
{
    public class PlayerInventory : MonoBehaviour
    {
        [SerializeField] private int startingCash = 10000;
        [SerializeField] private IntVariable playerCash;
        [SerializeField] private TextMeshProUGUI cashDisplay;

        private UnityEvent responsePurchaseSuccess;
        private UnityEvent saleSuccess;

        private List<ItemInfo> inventory = new List<ItemInfo>();

        private void Awake()
        {
            playerCash.Value = startingCash;
            cashDisplay.text = playerCash.Value.ToString();
        }

        public List<ItemInfo> Inventory
        {
            get { return inventory; }
        }

        public void PurchasedSucceeded(ItemInfo itemInfo)
        {
            playerCash.ApplyChange(-itemInfo.BuyPrice);
            cashDisplay.text = playerCash.Value.ToString();
            itemInfo.QuantityPurchased++;

            if (!inventory.Contains(itemInfo))
            {
                inventory.Add(itemInfo);
                //itemInfo.QuantityPurchased++;
            }
            //else
            //{
            //    inventory.Add(itemInfo);
            //}
        }

        public void SaleSucceeded(ItemInfo itemInfo)
        {
            playerCash.ApplyChange(itemInfo.SellPrice);
            cashDisplay.text = playerCash.Value.ToString();

            bool found = false;

            for (int i = 0; i < inventory.Count; i++)
            {
                if (inventory[i].OutfitID == itemInfo.OutfitID)
                {
                    if (itemInfo.QuantityPurchased > 1)
                    {
                        itemInfo.QuantityPurchased--;
                    }
                    else
                    {
                        inventory.Remove(itemInfo);
                    }

                    found = true;

                    break;
                            
                }
            }

            if (!found)
            {
                Debug.LogError("Sale of item succeeded without having in the inventory?");
            }

            // if (inventory.Contains(itemInfo))
            // {
            //     if (itemInfo.QuantityPurchased > 1)
            //     {
            //         itemInfo.QuantityPurchased--;
            //     }
            //     else
            //     {
            //         inventory.Remove(itemInfo);
            //     }
            // }
            // else
            // {
            //     Debug.LogError("Sale of item succeeded without having in the inventory?");
            // }
        }
    }
}
