using JetBrains.Annotations;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace ClothesShopSim
{
    public class InventoryItemDisplay : MonoBehaviour
    {
        [SerializeField] private ItemInfo displayedItem;
        [SerializeField] private ItemInfoHolder selectedItemInfoHolder;
        [SerializeField] private TextMeshProUGUI valueDisplay;
        [SerializeField] private TextMeshProUGUI countDisplay;

        [SerializeField] private Image iconDisplay;

        [SerializeField] private GameObject equippedOverlay;

        [SerializeField] private Button btn;

        public void SetDisplayedItem(ItemInfo displayedItem)
        {
            this.displayedItem = displayedItem;
        }

        public void UpdateUI()
        {
            iconDisplay.sprite = displayedItem.ItemSprite;

            valueDisplay.text = $"${displayedItem.SellPrice}";
            countDisplay.text = displayedItem.QuantityPurchased.ToString("F0");
            equippedOverlay.SetActive(displayedItem.Equipped);
            btn.interactable = !displayedItem.Equipped;
        }

        [UsedImplicitly]
        public void SelectItem()
        {
            selectedItemInfoHolder.ItemInfo = displayedItem;

            // InventoryController.Instance.TrySelectItem(displayedItem);
        }
    }
}
