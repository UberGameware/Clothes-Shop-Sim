using TMPro;
using UnityEngine;

namespace ClothesShopSim
{
    public class Shopkeeper : MonoBehaviour
    {
        public bool IsActive
        {
            get { return sellTrigger.IsActive; }
        }

        public static Shopkeeper Instance { get; private set; }

        [SerializeField] private GameEventItemInfo itemSoldGameEventItemInfo;
        [SerializeField] private ItemInfoHolder selectedItemInfoHolder;
        [SerializeField] private TextMeshPro transactionResult;

        [SerializeField] private SellTrigger sellTrigger;

        private PlayerInventory playerInventory;

        // private bool isActive;

        private const string PlayerTag = "Player";
        private const string SaleSucceededName = "Sale Succeeded";
        private const string SaleFailedName = "Sale Failed. Item not in Inventroy.";

        private void Awake()
        {
            if (Instance && Instance != this) Debug.LogError("Shopkeeper exists twice but is a singleton!");
            else Instance = this;

            playerInventory = GameObject.FindGameObjectWithTag(PlayerTag).GetComponent<PlayerInventory>();

            if (!playerInventory)
            {
                Debug.LogError("Player Inventory not found.");
            }
        }

        private void Update()
        {
            if (IsActive)
            {
                if (Input.GetKeyDown(KeyCode.N))
                {
                    if (selectedItemInfoHolder != null && selectedItemInfoHolder.ItemInfo.OutfitID != OutfitID.None)
                    {
                        if (playerInventory.Inventory.Contains(selectedItemInfoHolder.ItemInfo))
                        {
                            TransactionSucceed();
                        }
                        else
                        {
                            TransactionFailed();
                        }
                    }
                    else
                    {
                        Debug.LogError("Invalid selectedItemInfo.");
                    }
                }
            }
        }

        public void TransactionSucceed()
        {
            itemSoldGameEventItemInfo.Raise(selectedItemInfoHolder.ItemInfo);

            transactionResult.text = SaleSucceededName;
            transactionResult.gameObject.SetActive(true);
        }

        public void TransactionFailed()
        {
            transactionResult.text = SaleFailedName;
            transactionResult.gameObject.SetActive(true);
        }

        // private void OnTriggerStay2D(Collider2D collision)
        // {
        //     isActive = true;
        // }
        //
        // private void OnTriggerExit2D(Collider2D collision)
        // {
        //     isActive = false;
        //
        //     transactionResult.gameObject.SetActive(false);
        // }
    }
}
