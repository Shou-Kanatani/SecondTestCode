#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//DxLib::SetWindowText(L"�T���v���v���O����");
	DxLib::SetWindowText(_T("�T���v���v���O����"));
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	//:SetWindowText(L"Ninja Sprit");
	if (DxLib_Init()) {
		return -1;
	}
	
	while (ProcessMessage() !=-1)
	{
		ClearDrawScreen();
		ScreenFlip();
	}
	DxLib_End();

}
