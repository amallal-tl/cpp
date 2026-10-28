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

    CROW_ROUTE(app, "/health")([](){
        return crow::response(200, "Server looks healthy!");
    });
}

void UrlShortener::run()
{
    app.port(8080)
       .multithreaded()
       .run();
}