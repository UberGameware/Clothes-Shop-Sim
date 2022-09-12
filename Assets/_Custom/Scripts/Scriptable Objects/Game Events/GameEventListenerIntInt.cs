using System;
using UnityEngine;
using UnityEngine.Events;

namespace UberGameware
{
    public class GameEventListenerIntInt : MonoBehaviour, IEquatable<GameEventListenerIntInt>
    {
        [Tooltip("Event to register with.")]
        public GameEventIntInt Event;

        [Tooltip("Response to invoke when Event is raised.")]
        public UnityEvent<int, int> Response;

        private void OnEnable()
        {
            Event.RegisterListener(this);
        }

        private void OnDisable()
        {
            Event.UnregisterListener(this);
        }

        public void OnEventRaised(int id1, int id2)
        {
            Response.Invoke(id1, id2);
        }

        public bool Equals(GameEventListenerIntInt other)
        {
            return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
        }

        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((GameEventListenerIntInt) obj);
        }

        public override int GetHashCode()
        {
            return this.GetInstanceID().GetHashCode();
        }
    }
}
