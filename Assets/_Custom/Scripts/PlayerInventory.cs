using System.Collections;
using System.Collections.Generic;
using TMPro;
using UberGameware;
using UnityEngine;
using UnityEngine.Events;

namespace ClothesShopSim
{
    public class PlayerInventory : MonoBehaviour
    {
        [SerializeField] private IntVariable playerCash;
        [SerializeField] private TextMeshProUGUI cashDisplay;

        private UnityEvent response;

        private List<ItemInfo> inventory = new List<ItemInfo>();

        private void Awake()
        {
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

            if (inventory.Contains(itemInfo))
            {
                itemInfo.QuantityPurchased++;
            }
            else
            {
                inventory.Add(itemInfo);
            }
        }
    }
}
