using UnityEngine;
namespace Client
{
    struct Camera
    {
        public Transform targetTransform;
        public Transform playerTransform;
        public Transform cameraTransform;
        public float threshold;
    }
}