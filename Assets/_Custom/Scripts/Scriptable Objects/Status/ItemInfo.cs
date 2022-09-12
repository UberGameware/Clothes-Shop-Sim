using System;
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

        public bool Equals(ItemInfo other)
        {
            return outfitID == other.OutfitID && itemSprite == other.itemSprite && buyPrice == other.buyPrice &&
                   sellPrice == other.sellPrice;
        }

        public void SetItemInfo(ItemInfo itemInfo)
        {
            outfitID = itemInfo.outfitID;
            itemSprite = itemInfo.itemSprite;
            buyPrice = itemInfo.buyPrice;
            sellPrice = itemInfo.sellPrice;
        }

        public void ResetItem()
        {
            quantityPurchased = 0;
            equipped = false;
        }

        
    }
}
