
using UnityEngine;

public class CameraMouse : MonoBehaviour
{
    [SerializeField] Camera cam;
    [SerializeField] Transform player;
    [SerializeField] float threshold;


    void FixedUpdate()
    {
        Vector3 mosPos = cam.ScreenToWorldPoint(Input.mousePosition);
        mosPos.y = 0;
        Vector3 targetPos = (player.position + mosPos) / 2;

        targetPos.x = Mathf.Clamp(targetPos.x, -threshold + player.position.x, threshold + player.position.x);
        targetPos.z = Mathf.Clamp(targetPos.z, -threshold + player.position.z, threshold + player.position.z);

        transform.position = targetPos;
    }
}
