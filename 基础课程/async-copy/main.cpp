#include <iostream>
#include <uv.h>

void onTimer(uv_timer_t* timer) {
    std::cout << "Hello, libuv!" << std::endl;
}

int main() {
    uv_loop_t* loop = uv_default_loop();

    uv_timer_t timer;
    uv_timer_init(loop, &timer);

    // 设置定时器回调函数和触发时间间隔（单位：毫秒）
    uv_timer_start(&timer, onTimer, 0, 1000);

    return uv_run(loop, UV_RUN_DEFAULT);
}
