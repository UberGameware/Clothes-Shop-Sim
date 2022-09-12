using System;
using UnityEngine;
using UnityEngine.Events;

namespace UberGameware
{
    public class GameEventListenerInt : MonoBehaviour, IEquatable<GameEventListenerInt>
    {
        [Tooltip("Event to register with.")]
        public GameEventInt Event;

        [Tooltip("Response to invoke when Event is raised.")]
        public UnityEvent<int> Response;

        private void OnEnable()
        {
            Event.RegisterListener(this);
        }

        private void OnDisable()
        {
            Event.UnregisterListener(this);
        }

        public void OnEventRaised(int id)
        {
            Response.Invoke(id);
        }

        public bool Equals(GameEventListenerInt other)
        {
            return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
        }

        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((GameEventListenerInt) obj);
        }

        public override int GetHashCode()
        {
            return this.GetInstanceID().GetHashCode();
        }
    }
}
