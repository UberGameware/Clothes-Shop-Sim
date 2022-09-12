using System;
using UnityEngine;
using UnityEngine.Events;

namespace UberGameware
{
public class GameEventListener : MonoBehaviour, IEquatable<GameEventListener>
{
    [Tooltip("Event to register with.")]
    public GameEvent Event;

    [Tooltip("Response to invoke when Event is raised.")]
    public UnityEvent Response;

    private void OnEnable()
    {
        Event.RegisterListener(this);
    }

    private void OnDisable()
    {
        Event.UnregisterListener(this);
    }

    public void OnEventRaised()
    {
        Response.Invoke();
    }

    public bool Equals(GameEventListener other)
    {
        return !(other is null) && this.GetInstanceID() == other.GetInstanceID();
    }

    public override bool Equals(object obj)
    {
        if (ReferenceEquals(null, obj)) return false;
        if (ReferenceEquals(this, obj)) return true;
        if (obj.GetType() != this.GetType()) return false;
        return Equals((GameEventListener) obj);
    }

    public override int GetHashCode()
    {
        return this.GetInstanceID().GetHashCode();
    }
}
}
