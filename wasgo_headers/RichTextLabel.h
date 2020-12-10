/* THIS FILE IS GENERATED */
#ifndef RICHTEXTLABEL_H
#define RICHTEXTLABEL_H

#include "wasgo\wasgoid.h"

#include "error_list.h"
#include "Font.h"
#include "VScrollBar.h"
#include "Variant.h"
#include "Ustring.h"
#include "Texture.h"
#include "Control.h"
#include "Color.h"
class RichTextLabel : public Control{
public:
enum Align{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_FILL
};
enum ItemType{
ITEM_FRAME,
ITEM_TEXT,
ITEM_IMAGE,
ITEM_NEWLINE,
ITEM_FONT,
ITEM_COLOR,
ITEM_UNDERLINE,
ITEM_STRIKETHROUGH,
ITEM_ALIGN,
ITEM_INDENT,
ITEM_LIST,
ITEM_TABLE,
ITEM_FADE,
ITEM_SHAKE,
ITEM_WAVE,
ITEM_TORNADO,
ITEM_RAINBOW,
ITEM_CUSTOMFX,
ITEM_META
};
enum ListType{
LIST_NUMBERS,
LIST_LETTERS,
LIST_DOTS
};
void add_image(Texture p_image, int p_width = (int) 0, int p_height = (int) 0);
void add_text(String p_text);
Error append_bbcode(String p_bbcode);
void clear();
String get_bbcode();
int get_content_height();
Array get_effects();
int get_line_count();
float get_percent_visible();
int get_tab_size();
String get_text();
int get_total_character_count();
VScrollBar get_v_scroll();
int get_visible_characters();
int get_visible_line_count();
void install_effect(Variant p_effect);
bool is_fit_content_height_enabled();
bool is_meta_underlined();
bool is_overriding_selected_font_color();
bool is_scroll_active();
bool is_scroll_following();
bool is_selection_enabled();
bool is_using_bbcode();
void newline();
Error parse_bbcode(String p_bbcode);
Dictionary parse_expressions_for_values(PoolStringArray p_expressions);
void pop();
void push_align(RichTextLabel::Align p_align);
void push_bold();
void push_bold_italics();
void push_cell();
void push_color(Color p_color);
void push_font(Font p_font);
void push_indent(int p_level);
void push_italics();
void push_list(RichTextLabel::ListType p_type);
void push_meta(Variant p_data);
void push_mono();
void push_normal();
void push_strikethrough();
void push_table(int p_columns);
void push_underline();
bool remove_line(int p_line);
void scroll_to_line(int p_line);
void set_bbcode(String p_text);
void set_effects(Array p_effects);
void set_fit_content_height(bool p_enabled);
void set_meta_underline(bool p_enable);
void set_override_selected_font_color(bool p_override);
void set_percent_visible(float p_percent_visible);
void set_scroll_active(bool p_active);
void set_scroll_follow(bool p_follow);
void set_selection_enabled(bool p_enabled);
void set_tab_size(int p_spaces);
void set_table_column_expand(int p_column, bool p_expand, int p_ratio);
void set_text(String p_text);
void set_use_bbcode(bool p_enable);
void set_visible_characters(int p_amount);

protected:
public:
explicit RichTextLabel(WasGoID p_wasgo_id);
explicit RichTextLabel(Control other);
RichTextLabel();
RichTextLabel new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RichTextLabel_wrapper_add_image(WasGoID wasgo_id, WasGoID p_image, int p_width, int wasgo_throwaway, int p_height);
void _wasgo_RichTextLabel_wrapper_add_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
WasGoID _wasgo_RichTextLabel_wrapper_append_bbcode(WasGoID wasgo_id, const uint8_t * p_bbcode, int p_bbcode_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_clear(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_get_bbcode(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RichTextLabel_wrapper_get_content_height(WasGoID wasgo_id);
WasGoID _wasgo_RichTextLabel_wrapper_get_effects(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_line_count(WasGoID wasgo_id);
float _wasgo_RichTextLabel_wrapper_get_percent_visible(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_tab_size(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RichTextLabel_wrapper_get_total_character_count(WasGoID wasgo_id);
WasGoID _wasgo_RichTextLabel_wrapper_get_v_scroll(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_visible_characters(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_visible_line_count(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_install_effect(WasGoID wasgo_id, const uint8_t * p_effect, int p_effect_wasgo_buffer_size);
int _wasgo_RichTextLabel_wrapper_is_fit_content_height_enabled(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_meta_underlined(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_overriding_selected_font_color(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_scroll_active(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_scroll_following(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_selection_enabled(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_using_bbcode(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_newline(WasGoID wasgo_id);
WasGoID _wasgo_RichTextLabel_wrapper_parse_bbcode(WasGoID wasgo_id, const uint8_t * p_bbcode, int p_bbcode_wasgo_buffer_size);
WasGoID _wasgo_RichTextLabel_wrapper_parse_expressions_for_values(WasGoID wasgo_id, WasGoID p_expressions);
void _wasgo_RichTextLabel_wrapper_pop(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_RichTextLabel_wrapper_push_bold(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_bold_italics(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_cell(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_push_font(WasGoID wasgo_id, WasGoID p_font);
void _wasgo_RichTextLabel_wrapper_push_indent(WasGoID wasgo_id, int p_level);
void _wasgo_RichTextLabel_wrapper_push_italics(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_list(WasGoID wasgo_id, WasGoID p_type);
void _wasgo_RichTextLabel_wrapper_push_meta(WasGoID wasgo_id, const uint8_t * p_data, int p_data_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_push_mono(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_normal(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_strikethrough(WasGoID wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_table(WasGoID wasgo_id, int p_columns);
void _wasgo_RichTextLabel_wrapper_push_underline(WasGoID wasgo_id);
int _wasgo_RichTextLabel_wrapper_remove_line(WasGoID wasgo_id, int p_line);
void _wasgo_RichTextLabel_wrapper_scroll_to_line(WasGoID wasgo_id, int p_line);
void _wasgo_RichTextLabel_wrapper_set_bbcode(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_set_effects(WasGoID wasgo_id, WasGoID p_effects);
void _wasgo_RichTextLabel_wrapper_set_fit_content_height(WasGoID wasgo_id, bool p_enabled);
void _wasgo_RichTextLabel_wrapper_set_meta_underline(WasGoID wasgo_id, bool p_enable);
void _wasgo_RichTextLabel_wrapper_set_override_selected_font_color(WasGoID wasgo_id, bool p_override);
void _wasgo_RichTextLabel_wrapper_set_percent_visible(WasGoID wasgo_id, float p_percent_visible);
void _wasgo_RichTextLabel_wrapper_set_scroll_active(WasGoID wasgo_id, bool p_active);
void _wasgo_RichTextLabel_wrapper_set_scroll_follow(WasGoID wasgo_id, bool p_follow);
void _wasgo_RichTextLabel_wrapper_set_selection_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_RichTextLabel_wrapper_set_tab_size(WasGoID wasgo_id, int p_spaces);
void _wasgo_RichTextLabel_wrapper_set_table_column_expand(WasGoID wasgo_id, int p_column, bool p_expand, int wasgo_throwaway, int p_ratio);
void _wasgo_RichTextLabel_wrapper_set_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_set_use_bbcode(WasGoID wasgo_id, bool p_enable);
void _wasgo_RichTextLabel_wrapper_set_visible_characters(WasGoID wasgo_id, int p_amount);

    //constructor wrappers
    WasGoID _wasgo_RichTextLabel_constructor();
            
}
#endif