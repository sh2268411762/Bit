#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
//Debug   调试版本，包含调试信息，并且不做任何优化，便于程序员调试程序
//Release 发布版本，进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用