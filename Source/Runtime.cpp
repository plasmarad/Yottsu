// RUNTIME.CPP 
#include <Polaris/Window.h>
#include <future

int main(int argc, char **argv){
    Polaris::Window Entry("Yottsu" 800, 600, false, true);
    std::future<void> EventLoop = std::async(std::launch::async, &Polaris::Window::EventLoop, &Entry);
}
