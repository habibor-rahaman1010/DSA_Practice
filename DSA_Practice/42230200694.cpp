#include <bits/stdc++.h>
using namespace std;

unordered_set<string> keywords = {"if", "else", "while", "for", "return", "int", "float", "double", "char", "do", "break", "continue", "string", "long", "switch", "class", "public"};
unordered_set<char> arithmetic_ops = {'+', '-', '*', '/', '%'};
unordered_set<char> punctuation = {';', '{', '}', '(', ')', ',', '[', ']'};

// Function to tokenize keywords
vector<string> tokenize_keywords(const vector<string> &tokens) {
    vector<string> keyword_tokens;
    for (const string &token : tokens) {
        if (keywords.find(token) != keywords.end()) {
            keyword_tokens.push_back(token);
        }
    }
    return keyword_tokens;
}

// Function to tokenize identifiers
vector<string> tokenize_identifiers(const vector<string> &tokens) {
    vector<string> identifiers;
    for (const string &token : tokens) {
        if (!token.empty() && (isalpha(token[0]) || token[0] == '_') &&
            keywords.find(token) == keywords.end()) {
            identifiers.push_back(token);
        }
    }
    return identifiers;
}

// Function to tokenize constants
vector<string> tokenize_constants(const vector<string> &tokens) {
    vector<string> constants;
    for (const string &token : tokens) {
        bool is_constant = true;
        int dot_count = 0; // To ensure only one decimal point is allowed
        for (char c : token) {
            if (!isdigit(c)) {
                if (c == '.') {
                    dot_count++;
                    if (dot_count > 1) { // More than one dot makes it invalid
                        is_constant = false;
                        break;
                    }
                } else {
                    is_constant = false;
                    break;
                }
            }
        }
        if (is_constant && !token.empty()) {
            constants.push_back(token);
        }
    }
    return constants;
}

// Function to tokenize arithmetic operators
vector<char> tokenize_arithmetic_ops(const string &code) {
    vector<char> ops;
    for (char c : code) {
        if (arithmetic_ops.find(c) != arithmetic_ops.end()) {
            ops.push_back(c);
        }
    }
    return ops;
}

// Function to tokenize punctuation
vector<char> tokenize_punctuation(const string &code) {
    vector<char> puncts;
    for (char c : code) {
        if (punctuation.find(c) != punctuation.end()) {
            puncts.push_back(c);
        }
    }
    return puncts;
}

// Helper function to print lists
auto print_list = [](const auto &list, const string &name) {
    cout << name << " (" << list.size() << "): [";
    for (size_t i = 0; i < list.size(); ++i) {
        cout << list[i];
        if (i != list.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
};

int main() {
    //string source_code = "int a = b * c + 10;";
    string source_code = "int x = 10; if (x > 0) { return x + 5; } else { x = 0; }";
    stringstream ss(source_code);
    string token;
    vector<string> tokens;

    // Tokenize the source code
    while (ss >> token) {
        string cleaned_token;
        for (char c : token) {
            if (isalnum(c) || c == '_' || c == '.') { // Keep alphanumeric, underscores, and dots
                cleaned_token += c;
            } else {
                if (!cleaned_token.empty()) {
                    tokens.push_back(cleaned_token); // Add the cleaned token
                    cleaned_token.clear();
                }
                if (arithmetic_ops.find(c) != arithmetic_ops.end() || punctuation.find(c) != punctuation.end()) {
                    tokens.push_back(string(1, c)); // Add operators and punctuation as separate tokens
                }
            }
        }
        if (!cleaned_token.empty()) {
            tokens.push_back(cleaned_token); // Add any remaining token
        }
    }

    // Process tokens
    vector<string> keyword_tokens = tokenize_keywords(tokens);
    vector<string> identifier_tokens = tokenize_identifiers(tokens);
    vector<string> constant_tokens = tokenize_constants(tokens);
    vector<char> arithmetic_tokens = tokenize_arithmetic_ops(source_code);
    vector<char> punctuation_tokens = tokenize_punctuation(source_code);

    // Print results
    print_list(keyword_tokens, "Keywords");
    print_list(identifier_tokens, "Identifiers");
    print_list(constant_tokens, "Constants");
    print_list(arithmetic_tokens, "Arithmetic Ops");
    print_list(punctuation_tokens, "Punctuation");

    return 0;
}
