// Don't modify, generated file from C:/Users/jetpa/Documents/GitHub/aseprite/data/widgets/paste_text.xml

#ifndef GENERATED_PASTE_TEXT_H_INCLUDED
#define GENERATED_PASTE_TEXT_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/color_button.h"
#include "app/ui/drop_down_button.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/entry.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class PasteText : public ui::Window {
  public:
    PasteText() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("paste_text.xml", "paste_text", this);
      app::finder(this)
        >> "user_text" >> m_userText
        >> "font_size" >> m_fontSize
        >> "font_face" >> m_fontFace
        >> "font_color" >> m_fontColor
        >> "antialias" >> m_antialias
        >> "ok" >> m_ok
      ;
    }

    ui::Entry* userText() const { return m_userText; }
    app::ExprEntry* fontSize() const { return m_fontSize; }
    app::DropDownButton* fontFace() const { return m_fontFace; }
    app::ColorButton* fontColor() const { return m_fontColor; }
    ui::CheckBox* antialias() const { return m_antialias; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Entry* m_userText;
    app::ExprEntry* m_fontSize;
    app::DropDownButton* m_fontFace;
    app::ColorButton* m_fontColor;
    ui::CheckBox* m_antialias;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
