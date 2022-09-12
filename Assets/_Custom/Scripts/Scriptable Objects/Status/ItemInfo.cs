using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ClothesShopSim
{
    [CreateAssetMenu(fileName = "newItemInfo", menuName = "UberGameware/ScriptableObjects/ItemInfo")]
    [Serializable]
    public class ItemInfo : ScriptableObject
    {
        [SerializeField] OutfitID outfitID = OutfitID.None;
        [SerializeField] private Sprite itemSprite;
        [SerializeField] private int buyPrice;
        [SerializeField] private int sellPrice;

        private int quantityPurchased;
        private bool equipped;

        public OutfitID OutfitID
        {
            get { return outfitID; }
        }

        public Sprite ItemSprite
        {
            get { return itemSprite; }
        }

        public int BuyPrice
        {
            get { return buyPrice; }
        }

        public int SellPrice
        {
            get { return sellPrice; }
        }

        public int QuantityPurchased
        {
            get { return quantityPurchased; }
            set { quantityPurchased = value; }
        }

        public bool Equipped
        {
            get { return equipped; }
            set { equipped = value; }
        }
    }
}
