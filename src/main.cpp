#include "EditorView.h"
#include <iostream>
#include <memory>

int main() {
    std::cout << "=== Демонстрация архитектуры графического редактора ===" << std::endl;
    
    // Создание компонентов MVC
    auto controller = std::make_shared<EditorController>();
    auto view = std::make_unique<EditorView>(controller);
    
    // Демонстрация функции 1: Создание нового документа
    view->onNewDocument();
    
    // Демонстрация функции 2: Создание фигур
    view->onCreateShape("rectangle");
    view->onCreateShape("circle");
    view->onCreateShape("rectangle");
    
    // Демонстрация функции 3: Удаление фигуры
    view->onDeleteShape(2);
    
    // Демонстрация функции 4: Экспорт документа
    view->onExport("output.svg");
    
    // Демонстрация функции 5: Импорт документа из файла
    view->onImport("input.svg");
    view->onCreateShape("circle");
    
    std::cout << "\nзавершена!" << std::endl;
    return 0;
}

