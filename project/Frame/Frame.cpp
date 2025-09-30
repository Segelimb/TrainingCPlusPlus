
#include "pch.h"
#include "Task.h"

void Frame(int w, int h)
{
	if (w > 0 || h > 0)
	{
		for (int ElemH = 1; ElemH <= h; ElemH++)
		{
			if (ElemH == 1 || ElemH == h)
			{
				for (int ElemW = 1; ElemW <= w; ElemW++)
				{
					if (ElemW == 1 || ElemW == w) std::cout << "+";
					else if (ElemW < w) std::cout << "-";
					if (ElemW == w) std::cout << "\n";
				}
			}
			else if (ElemH < h)
			{
				for (int ElemW = 1; ElemW <= w; ElemW++)
				{
					if (ElemW == 1 || ElemW == w) std::cout << "|";
					else if (ElemW < w) std::cout << " ";
					if (ElemW == w) std::cout << "\n";
				}
			}
		}
	}
}

