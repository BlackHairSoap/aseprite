// Don't modify, generated file from C:/Users/jetpa/Documents/GitHub/aseprite/data/widgets/color_curve_point.xml

#ifndef GENERATED_COLOR_CURVE_POINT_H_INCLUDED
#define GENERATED_COLOR_CURVE_POINT_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class ColorCurvePoint : public ui::Window {
  public:
    ColorCurvePoint() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("color_curve_point.xml", "color_curve_point", this);
      app::finder(this)
        >> "x" >> m_x
        >> "y" >> m_y
        >> "ok" >> m_ok
        >> "delete_button" >> m_deleteButton
      ;
    }

    app::ExprEntry* x() const { return m_x; }
    app::ExprEntry* y() const { return m_y; }
    ui::Button* ok() const { return m_ok; }
    ui::Button* deleteButton() const { return m_deleteButton; }

  private:
    app::ExprEntry* m_x;
    app::ExprEntry* m_y;
    ui::Button* m_ok;
    ui::Button* m_deleteButton;
  };

} // namespace gen
} // namespace app

#endif
