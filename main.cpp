#include <openvr.h>
#include <iostream>


vr::IVRSystem *vr_sys = nullptr;

int main()
{
    std::cout << "VR_IsRuntimeInstalled() = " << vr::VR_IsRuntimeInstalled() << std::endl;
    std::cout << "VR_RuntimePath() = " << vr::VR_RuntimePath() << std::endl;
    std::cout << "VR_IsHmdPresent() = " << vr::VR_IsHmdPresent() << std::endl;

    vr::EVRInitError eError = vr::VRInitError_None;
    vr_sys = vr::VR_Init(&eError, vr::VRApplication_Scene);
    vr::VR_Shutdown();
    return 0;
}