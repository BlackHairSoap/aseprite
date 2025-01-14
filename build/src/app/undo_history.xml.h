// Don't modify, generated file from C:/Users/jetpa/Documents/GitHub/aseprite/data/widgets/undo_history.xml

#ifndef GENERATED_UNDO_HISTORY_H_INCLUDED
#define GENERATED_UNDO_HISTORY_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class UndoHistory : public ui::Window {
  public:
    UndoHistory() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("undo_history.xml", "undo_history", this);
      app::finder(this)
        >> "view" >> m_view
      ;
    }

    ui::View* view() const { return m_view; }

  private:
    ui::View* m_view;
  };

} // namespace gen
} // namespace app

#endif
