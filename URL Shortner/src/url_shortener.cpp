#include "url_shortener/url_shortener.h"

UrlShortener::UrlShortener()
{
    registerRoutes();
}

void UrlShortener::registerRoutes()
{
    CROW_ROUTE(app, "/")([]()
    {
        return "URL Shortener server is running!";
    });
}

void UrlShortener::run()
{
    app.port(8080)
       .multithreaded()
       .run();
}