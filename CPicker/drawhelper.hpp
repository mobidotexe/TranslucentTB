#pragma once
#include <cstdint>
#include <d2d1.h>

void DrawGradient(ID2D1RenderTarget *target, const D2D1_SIZE_F &size, const D2D1_COLOR_F &top, const D2D1_COLOR_F &bottom, const uint8_t &border_size = 0, const bool &isX = false);
void DrawTwoDimensionalGradient(ID2D1RenderTarget *target, const D2D1_SIZE_F &size, const D2D1_COLOR_F &top_left, const D2D1_COLOR_F &top_right, const D2D1_COLOR_F &bottom_left, const D2D1_COLOR_F &bottom_right);
void DrawCheckerboard(ID2D1RenderTarget *target, ID2D1SolidColorBrush *brush, const D2D1_SIZE_F &size, const float &square_size, const float &border_size = 0, bool flag = true);
void DrawArrows(ID2D1RenderTarget *target, const D2D1_SIZE_F &t_size, const float &position, const uint8_t &size, ID2D1Brush *brush);