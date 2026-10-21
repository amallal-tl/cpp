#include <iostream>
#include <unordered_map>
#include <string>
#include <random>

using namespace std;

std::string generateUniqueCode(
    const std::unordered_map<std::string, std::string>& urlDatabase,
    std::mt19937& generator)
{
    const std::string characters =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::uniform_int_distribution<std::size_t> distribution(
        0, characters.size() - 1);

    while (true)
    {
        std::string code;

        for (int i = 0; i < 6; ++i)
        {
            code += characters[distribution(generator)];
        }

        // Return the code only if it is not already in use.
        if (urlDatabase.find(code) == urlDatabase.end())
        {
            return code;
        }
    }
}

int main(){
    string inputURL;
    unordered_map<string, string> urls;

    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());

    cout << "Project : URL SHORTNER IS RUNNING..." << endl;
    while(true){    
        cout << "Please enter the URL" << endl;
        getline(cin, inputURL);
        
        if(inputURL == "exit") break;

        string shortURLCode = generateUniqueCode(urls, generator);

        urls[shortURLCode] = inputURL;

        cout << "Original URL: " << inputURL << endl;

        cout << "The Shortened URL: http://localhost:8080/" << shortURLCode << endl;

        auto itr = urls.find(shortURLCode);
        
        if (itr != urls.end()) {
            cout << "Redirect destination: " << itr->second << endl;
        } else {
            cout << "Short code not found!" << endl;
        }
    }

    cout << "Exiting application" << endl;
}