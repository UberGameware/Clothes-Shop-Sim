using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ClothesShopSim
{
    [CreateAssetMenu(fileName = "ItemInfoHolder", menuName = "UberGameware/ScriptableObjects/ItemInfoHolder")]
    [Serializable]
    public class ItemInfoHolder : ScriptableObject
    {
        [SerializeField] private ItemInfo itemInfo;

        public ItemInfo ItemInfo
        {
            get { return itemInfo; }
            set { itemInfo = value; }
        }
    }
}
