using TMPro;
using UnityEngine;

namespace ClothesShopSim
{
    public class SellTrigger : MonoBehaviour
    {
        [SerializeField] private TextMeshPro transactionResult;

        private bool isActive;

        public bool IsActive
        {
            get { return isActive; }
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
