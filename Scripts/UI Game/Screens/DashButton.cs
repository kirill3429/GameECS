
using UnityEngine;
using UnityEngine.EventSystems;

public class DashButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public GameScreen gameScreen;
    public void OnPointerDown(PointerEventData eventData)
    {
        gameScreen.dash = true;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        gameScreen.dash = false;
    }
}
