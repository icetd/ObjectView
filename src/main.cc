//#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#include <iostream>
#include "Core/Application.h"
#include "Core/log.h"
#include "Ui/MainLayer.h"
#include "Ui/SceneLayer.h"

#define VLD 0

#if VLD
#include <vld.h>
#endif

int main(int argc, char **argv)
{
    initLogger(INFO);
    Application *app = new Application("RobotView", 1200, 720);
    app->PushLayer<MainLayer>();
    app->PushLayer<SceneLayer>();
    app->Run();

    delete app;
    return 0;
}