#pragma once

#include "url_shortener/short_code_generator.h"

#include <optional>
#include <string>
#include <unordered_map>

class UrlService{
    public:
        std::string shorten(const std::string& url);
        std::optional<std::string> resolve(
            const std::string& shortcode) const;

    private:
        ShortCodeGenerator generator_;
        std::unordered_map<std::string, std::string> urls_;
};