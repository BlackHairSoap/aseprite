// Don't modify, generated file from C:/Users/jetpa/Documents/GitHub/aseprite/data/widgets/tileset_selector.xml

#ifndef GENERATED_TILESET_SELECTOR_H_INCLUDED
#define GENERATED_TILESET_SELECTOR_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/combobox.h"
#include "ui/entry.h"

namespace app {
namespace gen {

  class TilesetSelector : public ui::VBox {
  public:
    TilesetSelector() {
      app::load_widget("tileset_selector.xml", "tileset_selector", this);
      app::finder(this)
        >> "tilesets" >> m_tilesets
        >> "name" >> m_name
        >> "grid_width" >> m_gridWidth
        >> "grid_height" >> m_gridHeight
        >> "base_index" >> m_baseIndex
      ;
    }

    ui::ComboBox* tilesets() const { return m_tilesets; }
    ui::Entry* name() const { return m_name; }
    app::ExprEntry* gridWidth() const { return m_gridWidth; }
    app::ExprEntry* gridHeight() const { return m_gridHeight; }
    app::ExprEntry* baseIndex() const { return m_baseIndex; }

  private:
    ui::ComboBox* m_tilesets;
    ui::Entry* m_name;
    app::ExprEntry* m_gridWidth;
    app::ExprEntry* m_gridHeight;
    app::ExprEntry* m_baseIndex;
  };

} // namespace gen
} // namespace app

#endif
