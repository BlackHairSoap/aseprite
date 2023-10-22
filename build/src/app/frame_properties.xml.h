// Don't modify, generated file from C:/Users/jetpa/Documents/GitHub/aseprite/data/widgets/frame_properties.xml

#ifndef GENERATED_FRAME_PROPERTIES_H_INCLUDED
#define GENERATED_FRAME_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class FrameProperties : public ui::Window {
  public:
    FrameProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("frame_properties.xml", "frame_properties", this);
      app::finder(this)
        >> "frame" >> m_frame
        >> "frlen" >> m_frlen
        >> "ok" >> m_ok
      ;
    }

    ui::Label* frame() const { return m_frame; }
    app::ExprEntry* frlen() const { return m_frlen; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Label* m_frame;
    app::ExprEntry* m_frlen;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif