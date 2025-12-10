#include "EditorView.h"
#include <iostream>

EditorView::EditorView(std::shared_ptr<EditorController> ctrl) 
    : controller(ctrl) {}

void EditorView::onNewDocument() {
    std::cout << "[GUI] Пользователь нажал 'Создать документ'" << std::endl;
    controller->createNewDocument();
}

void EditorView::onImport(const std::string& path) {
    std::cout << "[GUI] Пользователь нажал 'Импорт документа'" << std::endl;
    controller->importDocument(path);
}

void EditorView::onExport(const std::string& path) {
    std::cout << "[GUI] Пользователь нажал 'Экспорт документа'" << std::endl;
    controller->exportDocument(path);
}

void EditorView::onCreateShape(const std::string& type) {
    std::cout << "[GUI] Пользователь создал фигуру: " << type << std::endl;
    controller->createShape(type);
}

void EditorView::onDeleteShape(int id) {
    std::cout << "[GUI] Пользователь удалил фигуру #" << id << std::endl;
    controller->deleteShape(id);
}
