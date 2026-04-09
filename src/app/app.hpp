#pragma once

struct AppState {
    int selected_menu = 1; // 0=Home, 1=Notes, 2=Settings
};

class App {
public:
    void run();

private:
    AppState state_;
};