using TMPro;
using UberGameware;
using UnityEngine;

namespace ClothesShopSim
{
    public class DisplayPodium : MonoBehaviour
    {
        [SerializeField] private GameEventItemInfo itemPurchased;
        [SerializeField] private ItemInfo itemInfo;
        [SerializeField] private IntVariable playerCash;
        [SerializeField] private TextMeshPro itemDisplayPrice;
        [SerializeField] private TextMeshPro transactionResult;

        private bool isActive;

        private const string PurchaseSucceededName = "Purchase Succeeded";
        private const string PurchaseFailedName = "Purchase Failed. Not enough cash.";

        private void Awake()
        {
            itemDisplayPrice = GetComponentInChildren<TextMeshPro>();
            itemDisplayPrice.text = itemInfo.BuyPrice.ToString();
        }


        private void Update()
        {
            if (isActive)
            {
                if (Input.GetKeyDown(KeyCode.B))
                {
                    if (playerCash.Value >= itemInfo.BuyPrice)
                    {
                        itemPurchased.Raise(itemInfo);

                        transactionResult.text = PurchaseSucceededName;
                    }
                    else
                    {
                        transactionResult.text = PurchaseFailedName;
                    }

                    transactionResult.gameObject.SetActive(true);
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
