using System;
using UnityEngine;
using UnityEngine.Events;

namespace UberGameware
{
    public class GameEventListenerBool : MonoBehaviour, IEquatable<GameEventListenerBool>
    {
        [Tooltip("Event to register with.")]
        public GameEventBool Event;

        [Tooltip("Response to invoke when Event is raised.")]
        public UnityEvent<bool> Response;

        private void OnEnable()
        {
            Event.RegisterListener(this);
        }

        private void OnDisable()
        {
            Event.UnregisterListener(this);
        }

        public void OnEventRaised(bool state)
        {
            Response.Invoke(state);
        }

        public bool Equals(GameEventListenerBool other)
        {
            return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
        }

        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != this.GetType()) return false;
            return Equals((GameEventListenerBool) obj);
        }

        public override int GetHashCode()
        {
            return this.GetInstanceID().GetHashCode();
        }
    }
}
