#include "IO.h"

using namespace std;

IO::IO() {
    cout << "IO constructor." << endl;
}

void IO::add_line(Line line) {
    lines_.push_back(line);
}

void IO::display_datos() {
    for(auto& line : lines_)
        line.display();
}

// INPUT methods
Input::Input() {
    cout << "Input constructor." << endl;
}

// reads data from file
vector<Line> leer_datos() {
    string string_line;
    vector<Line> v;
    while (getline(cin, string_line)) {
        // remove " and .
        string trimmed_line = string_line.substr(1,string_line.length()-3);
        Line line = Line(trimmed_line, Line::convert(trimmed_line));
        v.push_back(line);
    }
    return v;
}

void Input::pedir_datos() {
    cout << "Pidiendo datos a usuario." << endl;
    lines_ = leer_datos();
    cout << "Lineas leidas: " << endl;
    display_datos();
}

// TODO: figure out if we should just modify private variable and return void instead.
vector<Line> Output::alter_lines() {
    cout << "Sorteando datos del output." << endl;
    vector<Line> v;
    v.push_back(Line("santi"));
    return v;
}

Output::Output() {
    cout << "Output constructor." << endl;
}
