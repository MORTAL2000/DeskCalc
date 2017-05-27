#pragma once

#include <functional>
#include <map>
#include <string>

#include "Parser.hpp"

class Calculator {
public: 
    Calculator();

    void run_file(const std::string& path);
    void run_cli();

private:
    void show_intro() const;
    bool handle_cmd(const std::string& cmd);
    void register_commands();

    SymbolTable symbolTable;
    Parser parser;
    std::map<std::string, std::function<void()>> commands;
    bool isRunning{ true };
};

void print_complex(std::ostream& os, Complex num);