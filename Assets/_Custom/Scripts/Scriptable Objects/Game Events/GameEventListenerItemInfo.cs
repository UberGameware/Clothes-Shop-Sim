using System;
using UnityEngine;
using UnityEngine.Events;

namespace ClothesShopSim
{
    public class GameEventListenerItemInfo : MonoBehaviour, IEquatable<GameEventListenerItemInfo>
    {
        [Tooltip("Event to register with.")]
        public GameEventItemInfo Event;

        [Tooltip("Response to invoke when Event is raised.")]
        public UnityEvent<ItemInfo> Response;

        private void OnEnable()
        {
            Event.RegisterListener(this);
        }

        private void OnDisable()
        {
            Event.UnregisterListener(this);
        }

        public void OnEventRaised(ItemInfo itemInfo)
        {
            Response.Invoke(itemInfo);
        }

        public bool Equals(GameEventListenerItemInfo other)
        {
            return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
        }

        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((GameEventListenerItemInfo) obj);
        }

        public override int GetHashCode()
        {
            return this.GetInstanceID().GetHashCode();
        }
    }
}
