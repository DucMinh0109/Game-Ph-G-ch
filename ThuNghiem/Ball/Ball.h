#ifndef BALL_H_
#define BALL_H_

#include <climits>
#include <cmath>

#include "Entity.h"

// Khởi tạo tốc độ bóng với vận tốc pixels mỗi giây
float tocDoBong = 600;

class Ball: public Entity
/*/* các thành viên public của lớp cha Entity
vẫn có thể được truy cập trực tiếp từ Ball.
*/
{
public:
    Ball(SDL_Renderer* renderer);
    ~Ball();
    void Update(float delta);
    void Render(float delta);
    void SetDirection(float HuongX, float HuongY);
    float HuongX, HuongY;

private:
    SDL_Texture* texture;

};

#endif
///////////////////////////
