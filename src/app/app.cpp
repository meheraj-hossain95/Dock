#include "app.hpp"
#include "../ui/ui.hpp"

#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

void App::run() {
    auto screen = ScreenInteractive::Fullscreen();
    auto ui = CreateUI(&state_);
    screen.Loop(ui);
}