#pragma once

#include "crow.h"

class UrlShortener{
    public:
        UrlShortener();
        void run();

    private:
        Crow::SimpleApp app;
        void registerRoutes();
};