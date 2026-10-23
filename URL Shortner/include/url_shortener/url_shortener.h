#pragma once

#include "crow.h"
#include "url_shortener/url_service.h"

class UrlShortener{
    public:
        UrlShortener();
        void run();

    private:
        crow::SimpleApp app;
        UrlService urlService_;
        void registerRoutes();
};