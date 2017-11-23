#include "misc_conf.h"
#if  USE_LV_FONT_SYMBOL_30_BASIC != 0
#include <stdint.h>
#include "../lv_misc/lv_font.h"

/*Store the image of the letters (glyph) */
static const uint8_t symbol_30_basic_bitmap[] = 
{
    // ASCII: 57344, char width: 30
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x9f, 0xff, 0xfc,  // OOOOOOOOO--OOOOOOOOOOOOOOOOOOO..
    0xff, 0x1f, 0xff, 0xfc,  // OOOOOOOO---OOOOOOOOOOOOOOOOOOO..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..

    // ASCII: 57345, char width: 30
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x01, 0x80,  // -----------------------OO-----..
    0x00, 0x00, 0x03, 0xc0,  // ----------------------OOOO----..
    0x00, 0x00, 0x07, 0xe0,  // ---------------------OOOOOO---..
    0x00, 0x00, 0x0f, 0xf0,  // --------------------OOOOOOOO--..
    0x00, 0x00, 0x1f, 0xf0,  // -------------------OOOOOOOOO--..
    0x00, 0x00, 0x3f, 0xe0,  // ------------------OOOOOOOOO---..
    0x06, 0x00, 0x7f, 0xc0,  // -----OO----------OOOOOOOOO----..
    0x0f, 0x00, 0xff, 0x80,  // ----OOOO--------OOOOOOOOO-----..
    0x1f, 0x81, 0xff, 0x00,  // ---OOOOOO------OOOOOOOOO------..
    0x3f, 0xc3, 0xfe, 0x00,  // --OOOOOOOO----OOOOOOOOO-------..
    0x3f, 0xe7, 0xfc, 0x00,  // --OOOOOOOOO--OOOOOOOOO--------..
    0x1f, 0xff, 0xf8, 0x00,  // ---OOOOOOOOOOOOOOOOOO---------..
    0x0f, 0xff, 0xf0, 0x00,  // ----OOOOOOOOOOOOOOOO----------..
    0x07, 0xff, 0xe0, 0x00,  // -----OOOOOOOOOOOOOO-----------..
    0x03, 0xff, 0xc0, 0x00,  // ------OOOOOOOOOOOO------------..
    0x01, 0xff, 0x80, 0x00,  // -------OOOOOOOOOO-------------..
    0x00, 0xff, 0x00, 0x00,  // --------OOOOOOOO--------------..
    0x00, 0x7e, 0x00, 0x00,  // ---------OOOOOO---------------..
    0x00, 0x3c, 0x00, 0x00,  // ----------OOOO----------------..
    0x00, 0x18, 0x00, 0x00,  // -----------OO-----------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..

    // ASCII: 57346, char width: 24
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x06, 0x00, 0x60,  // -----OO----------OO-----
    0x0f, 0x00, 0xf0,  // ----OOOO--------OOOO----
    0x1f, 0x81, 0xf8,  // ---OOOOOO------OOOOOO---
    0x3f, 0xc3, 0xfc,  // --OOOOOOOO----OOOOOOOO--
    0x3f, 0xe7, 0xfc,  // --OOOOOOOOO--OOOOOOOOO--
    0x1f, 0xff, 0xf8,  // ---OOOOOOOOOOOOOOOOOO---
    0x0f, 0xff, 0xf0,  // ----OOOOOOOOOOOOOOOO----
    0x07, 0xff, 0xe0,  // -----OOOOOOOOOOOOOO-----
    0x03, 0xff, 0xc0,  // ------OOOOOOOOOOOO------
    0x01, 0xff, 0x80,  // -------OOOOOOOOOO-------
    0x01, 0xff, 0x80,  // -------OOOOOOOOOO-------
    0x03, 0xff, 0xc0,  // ------OOOOOOOOOOOO------
    0x07, 0xff, 0xe0,  // -----OOOOOOOOOOOOOO-----
    0x0f, 0xff, 0xf0,  // ----OOOOOOOOOOOOOOOO----
    0x1f, 0xff, 0xf8,  // ---OOOOOOOOOOOOOOOOOO---
    0x3f, 0xe7, 0xfc,  // --OOOOOOOOO--OOOOOOOOO--
    0x3f, 0xc3, 0xfc,  // --OOOOOOOO----OOOOOOOO--
    0x1f, 0x81, 0xf8,  // ---OOOOOO------OOOOOO---
    0x0f, 0x00, 0xf0,  // ----OOOO--------OOOO----
    0x06, 0x00, 0x60,  // -----OO----------OO-----
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------

    // ASCII: 57347, char width: 26
    0x00, 0x0c, 0x00, 0x00,  // ------------OO------------......
    0x00, 0x1e, 0x00, 0x00,  // -----------OOOO-----------......
    0x00, 0x1e, 0x00, 0x00,  // -----------OOOO-----------......
    0x00, 0x1e, 0x00, 0x00,  // -----------OOOO-----------......
    0x00, 0x1e, 0x00, 0x00,  // -----------OOOO-----------......
    0x07, 0x1e, 0x38, 0x00,  // -----OOO---OOOO---OOO-----......
    0x1f, 0x9e, 0x7c, 0x00,  // ---OOOOOO--OOOO--OOOOO----......
    0x1f, 0x1e, 0x7e, 0x00,  // ---OOOOO---OOOO--OOOOOO---......
    0x3f, 0x1e, 0x3f, 0x00,  // --OOOOOO---OOOO---OOOOOO--......
    0x7e, 0x1e, 0x1f, 0x00,  // -OOOOOO----OOOO----OOOOO--......
    0x7c, 0x1e, 0x0f, 0x80,  // -OOOOO-----OOOO-----OOOOO-......
    0x78, 0x1e, 0x07, 0x80,  // -OOOO------OOOO------OOOO-......
    0xf8, 0x1e, 0x07, 0x80,  // OOOOO------OOOO------OOOO-......
    0xf8, 0x1e, 0x07, 0xc0,  // OOOOO------OOOO------OOOOO......
    0xf0, 0x0c, 0x07, 0xc0,  // OOOO--------OO-------OOOOO......
    0xf0, 0x00, 0x07, 0xc0,  // OOOO-----------------OOOOO......
    0xf0, 0x00, 0x07, 0xc0,  // OOOO-----------------OOOOO......
    0xf8, 0x00, 0x07, 0xc0,  // OOOOO----------------OOOOO......
    0xf8, 0x00, 0x07, 0x80,  // OOOOO----------------OOOO-......
    0x78, 0x00, 0x0f, 0x80,  // -OOOO---------------OOOOO-......
    0x7c, 0x00, 0x0f, 0x80,  // -OOOOO--------------OOOOO-......
    0x3e, 0x00, 0x1f, 0x00,  // --OOOOO------------OOOOO--......
    0x3f, 0x00, 0x7f, 0x00,  // --OOOOOO---------OOOOOOO--......
    0x1f, 0xe1, 0xfe, 0x00,  // ---OOOOOOOO----OOOOOOOO---......
    0x0f, 0xff, 0xfc, 0x00,  // ----OOOOOOOOOOOOOOOOOO----......
    0x07, 0xff, 0xf8, 0x00,  // -----OOOOOOOOOOOOOOOO-----......
    0x01, 0xff, 0xe0, 0x00,  // -------OOOOOOOOOOOO-------......
    0x00, 0x7f, 0x80, 0x00,  // ---------OOOOOOOO---------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57348, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x1e, 0x00, 0x00,  // -----------OOOO-----------......
    0x00, 0x3e, 0x00, 0x00,  // ----------OOOOO-----------......
    0x00, 0x3e, 0x00, 0x00,  // ----------OOOOO-----------......
    0x0e, 0x3f, 0x18, 0x00,  // ----OOO---OOOOOO---OO-----......
    0x1f, 0xff, 0xfc, 0x00,  // ---OOOOOOOOOOOOOOOOOOO----......
    0x1f, 0xff, 0xfe, 0x00,  // ---OOOOOOOOOOOOOOOOOOOO---......
    0x3f, 0xff, 0xfe, 0x00,  // --OOOOOOOOOOOOOOOOOOOOO---......
    0x1f, 0xff, 0xfc, 0x00,  // ---OOOOOOOOOOOOOOOOOOO----......
    0x0f, 0xff, 0xfc, 0x00,  // ----OOOOOOOOOOOOOOOOOO----......
    0x0f, 0xe1, 0xfc, 0x00,  // ----OOOOOOO----OOOOOOO----......
    0x3f, 0xc0, 0xfe, 0x00,  // --OOOOOOOO------OOOOOOO---......
    0xff, 0x80, 0x7f, 0xc0,  // OOOOOOOOO--------OOOOOOOOO......
    0xff, 0x80, 0x7f, 0xc0,  // OOOOOOOOO--------OOOOOOOOO......
    0xff, 0x80, 0x7f, 0xc0,  // OOOOOOOOO--------OOOOOOOOO......
    0xff, 0x80, 0x7f, 0xc0,  // OOOOOOOOO--------OOOOOOOOO......
    0xff, 0x80, 0xff, 0x80,  // OOOOOOOOO-------OOOOOOOOO-......
    0x0f, 0xc1, 0xfc, 0x00,  // ----OOOOOO-----OOOOOOO----......
    0x0f, 0xff, 0xfc, 0x00,  // ----OOOOOOOOOOOOOOOOOO----......
    0x0f, 0xff, 0xfc, 0x00,  // ----OOOOOOOOOOOOOOOOOO----......
    0x1f, 0xff, 0xfe, 0x00,  // ---OOOOOOOOOOOOOOOOOOOO---......
    0x3f, 0xff, 0xfe, 0x00,  // --OOOOOOOOOOOOOOOOOOOOO---......
    0x1f, 0xff, 0xfe, 0x00,  // ---OOOOOOOOOOOOOOOOOOOO---......
    0x0f, 0x3f, 0x3c, 0x00,  // ----OOOO--OOOOOO--OOOO----......
    0x04, 0x3f, 0x10, 0x00,  // -----O----OOOOOO---O------......
    0x00, 0x3e, 0x00, 0x00,  // ----------OOOOO-----------......
    0x00, 0x3e, 0x00, 0x00,  // ----------OOOOO-----------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57349, char width: 28
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x0f, 0x0f, 0x00,  // ------------OOOO----OOOO----....
    0x00, 0x1f, 0x8f, 0x00,  // -----------OOOOOO---OOOO----....
    0x00, 0x3f, 0xef, 0x00,  // ----------OOOOOOOOO-OOOO----....
    0x00, 0x78, 0xff, 0x00,  // ---------OOOO---OOOOOOOO----....
    0x00, 0xf6, 0x7f, 0x00,  // --------OOOO-OO--OOOOOOO----....
    0x03, 0xef, 0x3f, 0x00,  // ------OOOOO-OOOO--OOOOOO----....
    0x07, 0x9f, 0xdf, 0x00,  // -----OOOO--OOOOOOO-OOOOO----....
    0x0f, 0x3f, 0xef, 0x80,  // ----OOOO--OOOOOOOOO-OOOOO---....
    0x1e, 0x7f, 0xf3, 0xc0,  // ---OOOO--OOOOOOOOOOO--OOOO--....
    0x3d, 0xff, 0xf9, 0xe0,  // --OOOO-OOOOOOOOOOOOOO--OOOO-....
    0x7b, 0xff, 0xfc, 0xf0,  // -OOOO-OOOOOOOOOOOOOOOO--OOOO....
    0x67, 0xff, 0xff, 0x60,  // -OO--OOOOOOOOOOOOOOOOOOO-OO-....
    0x0f, 0xff, 0xff, 0x00,  // ----OOOOOOOOOOOOOOOOOOOO----....
    0x0f, 0xff, 0xff, 0x00,  // ----OOOOOOOOOOOOOOOOOOOO----....
    0x0f, 0xff, 0xff, 0x00,  // ----OOOOOOOOOOOOOOOOOOOO----....
    0x0f, 0xf0, 0x7f, 0x00,  // ----OOOOOOOO-----OOOOOOO----....
    0x0f, 0xf0, 0x7f, 0x00,  // ----OOOOOOOO-----OOOOOOO----....
    0x0f, 0xf0, 0x7f, 0x00,  // ----OOOOOOOO-----OOOOOOO----....
    0x0f, 0xf0, 0x7f, 0x00,  // ----OOOOOOOO-----OOOOOOO----....
    0x0f, 0xf0, 0x7f, 0x00,  // ----OOOOOOOO-----OOOOOOO----....
    0x07, 0xf0, 0x7f, 0x00,  // -----OOOOOOO-----OOOOOOO----....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....

    // ASCII: 57350, char width: 26
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x3e, 0x00, 0x00,  // ----------OOOOO-----------......
    0x01, 0xff, 0xc0, 0x80,  // -------OOOOOOOOOOO------O-......
    0x03, 0xff, 0xf1, 0xc0,  // ------OOOOOOOOOOOOOO---OOO......
    0x0f, 0xff, 0xff, 0xc0,  // ----OOOOOOOOOOOOOOOOOOOOOO......
    0x1f, 0xff, 0xff, 0xc0,  // ---OOOOOOOOOOOOOOOOOOOOOOO......
    0x3f, 0x80, 0x7f, 0xc0,  // --OOOOOOO--------OOOOOOOOO......
    0x3e, 0x00, 0x3f, 0xc0,  // --OOOOO-----------OOOOOOOO......
    0x7c, 0x00, 0x3f, 0xc0,  // -OOOOO------------OOOOOOOO......
    0x7c, 0x00, 0x7f, 0xc0,  // -OOOOO-----------OOOOOOOOO......
    0x78, 0x00, 0xff, 0xc0,  // -OOOO-----------OOOOOOOOOO......
    0xf8, 0x00, 0xff, 0x80,  // OOOOO-----------OOOOOOOOO-......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x7f, 0x80, 0x07, 0x80,  // -OOOOOOOO------------OOOO-......
    0xff, 0xc0, 0x07, 0x80,  // OOOOOOOOOO-----------OOOO-......
    0xff, 0x80, 0x0f, 0x80,  // OOOOOOOOO-----------OOOOO-......
    0xff, 0x00, 0x0f, 0x00,  // OOOOOOOO------------OOOO--......
    0xfe, 0x00, 0x1f, 0x00,  // OOOOOOO------------OOOOO--......
    0xff, 0x00, 0x7e, 0x00,  // OOOOOOOO---------OOOOOO---......
    0xff, 0xe1, 0xfe, 0x00,  // OOOOOOOOOOO----OOOOOOOO---......
    0xff, 0xff, 0xfc, 0x00,  // OOOOOOOOOOOOOOOOOOOOOO----......
    0xe7, 0xff, 0xf8, 0x00,  // OOO--OOOOOOOOOOOOOOOO-----......
    0xc1, 0xff, 0xe0, 0x00,  // OO-----OOOOOOOOOOOO-------......
    0x00, 0x7f, 0x80, 0x00,  // ---------OOOOOOOO---------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......
    0x00, 0x00, 0x00, 0x00,  // --------------------------......

    // ASCII: 57351, char width: 21
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x01, 0x80,  // ---------------OO----...
    0x00, 0x03, 0xc0,  // --------------OOOO---...
    0x00, 0x07, 0xe0,  // -------------OOOOOO--...
    0x00, 0x0f, 0xf0,  // ------------OOOOOOOO-...
    0x00, 0x1f, 0xf0,  // -----------OOOOOOOOO-...
    0x00, 0x3f, 0xe0,  // ----------OOOOOOOOO--...
    0x00, 0x7f, 0xc0,  // ---------OOOOOOOOO---...
    0x00, 0xff, 0x80,  // --------OOOOOOOOO----...
    0x01, 0xff, 0x00,  // -------OOOOOOOOO-----...
    0x03, 0xfe, 0x00,  // ------OOOOOOOOO------...
    0x07, 0xfc, 0x00,  // -----OOOOOOOOO-------...
    0x0f, 0xf8, 0x00,  // ----OOOOOOOOO--------...
    0x1f, 0xf0, 0x00,  // ---OOOOOOOOO---------...
    0x1f, 0xe0, 0x00,  // ---OOOOOOOO----------...
    0x1f, 0xf0, 0x00,  // ---OOOOOOOOO---------...
    0x0f, 0xf8, 0x00,  // ----OOOOOOOOO--------...
    0x07, 0xfc, 0x00,  // -----OOOOOOOOO-------...
    0x03, 0xfe, 0x00,  // ------OOOOOOOOO------...
    0x01, 0xff, 0x00,  // -------OOOOOOOOO-----...
    0x00, 0xff, 0x80,  // --------OOOOOOOOO----...
    0x00, 0x7f, 0xc0,  // ---------OOOOOOOOO---...
    0x00, 0x3f, 0xe0,  // ----------OOOOOOOOO--...
    0x00, 0x1f, 0xf0,  // -----------OOOOOOOOO-...
    0x00, 0x0f, 0xf0,  // ------------OOOOOOOO-...
    0x00, 0x07, 0xe0,  // -------------OOOOOO--...
    0x00, 0x03, 0xc0,  // --------------OOOO---...
    0x00, 0x01, 0x80,  // ---------------OO----...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...

    // ASCII: 57352, char width: 21
    0x00, 0x00, 0x00,  // ---------------------...
    0x0c, 0x00, 0x00,  // ----OO---------------...
    0x1e, 0x00, 0x00,  // ---OOOO--------------...
    0x3f, 0x00, 0x00,  // --OOOOOO-------------...
    0x3f, 0x80, 0x00,  // --OOOOOOO------------...
    0x3f, 0xc0, 0x00,  // --OOOOOOOO-----------...
    0x1f, 0xe0, 0x00,  // ---OOOOOOOO----------...
    0x0f, 0xf0, 0x00,  // ----OOOOOOOO---------...
    0x07, 0xf8, 0x00,  // -----OOOOOOOO--------...
    0x03, 0xfc, 0x00,  // ------OOOOOOOO-------...
    0x01, 0xfe, 0x00,  // -------OOOOOOOO------...
    0x00, 0xff, 0x00,  // --------OOOOOOOO-----...
    0x00, 0x7f, 0x80,  // ---------OOOOOOOO----...
    0x00, 0x3f, 0xc0,  // ----------OOOOOOOO---...
    0x00, 0x3f, 0xe0,  // ----------OOOOOOOOO--...
    0x00, 0x3f, 0xc0,  // ----------OOOOOOOO---...
    0x00, 0x7f, 0x80,  // ---------OOOOOOOO----...
    0x00, 0xff, 0x00,  // --------OOOOOOOO-----...
    0x01, 0xfe, 0x00,  // -------OOOOOOOO------...
    0x03, 0xfc, 0x00,  // ------OOOOOOOO-------...
    0x07, 0xf8, 0x00,  // -----OOOOOOOO--------...
    0x0f, 0xf0, 0x00,  // ----OOOOOOOO---------...
    0x1f, 0xe0, 0x00,  // ---OOOOOOOO----------...
    0x3f, 0xc0, 0x00,  // --OOOOOOOO-----------...
    0x3f, 0x80, 0x00,  // --OOOOOOO------------...
    0x3f, 0x00, 0x00,  // --OOOOOO-------------...
    0x1e, 0x00, 0x00,  // ---OOOO--------------...
    0x0c, 0x00, 0x00,  // ----OO---------------...
    0x00, 0x00, 0x00,  // ---------------------...
    0x00, 0x00, 0x00,  // ---------------------...

    // ASCII: 57353, char width: 24
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x3c, 0x00,  // ----------OOOO----------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0xff, 0xff, 0xfe,  // OOOOOOOOOOOOOOOOOOOOOOO-
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xfe,  // OOOOOOOOOOOOOOOOOOOOOOO-
    0x00, 0xff, 0x00,  // --------OOOOOOOO--------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x7e, 0x00,  // ---------OOOOOO---------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------

    // ASCII: 57354, char width: 24
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0xff, 0xff, 0xfe,  // OOOOOOOOOOOOOOOOOOOOOOO-
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOO
    0xff, 0xff, 0xfe,  // OOOOOOOOOOOOOOOOOOOOOOO-
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------

    // ASCII: 57355, char width: 30
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x02, 0x00, 0x00,  // --------------O---------------..
    0x00, 0x07, 0x00, 0x00,  // -------------OOO--------------..
    0x00, 0x0f, 0x80, 0x00,  // ------------OOOOO-------------..
    0x00, 0x1f, 0xc0, 0x00,  // -----------OOOOOOO------------..
    0x00, 0x3f, 0xe0, 0x00,  // ----------OOOOOOOOO-----------..
    0x00, 0x7f, 0xf0, 0x00,  // ---------OOOOOOOOOOO----------..
    0x00, 0xff, 0xf8, 0x00,  // --------OOOOOOOOOOOOO---------..
    0x01, 0xff, 0xfc, 0x00,  // -------OOOOOOOOOOOOOOO--------..
    0x03, 0xff, 0xfe, 0x00,  // ------OOOOOOOOOOOOOOOOO-------..
    0x07, 0xf8, 0xff, 0x00,  // -----OOOOOOOO---OOOOOOOO------..
    0x0f, 0xf0, 0x7f, 0x80,  // ----OOOOOOOO-----OOOOOOOO-----..
    0x1f, 0xe0, 0x3f, 0xc0,  // ---OOOOOOOO-------OOOOOOOO----..
    0x3f, 0xc0, 0x1f, 0xe0,  // --OOOOOOOO---------OOOOOOOO---..
    0x7f, 0x80, 0x0f, 0xf0,  // -OOOOOOOO-----------OOOOOOOO--..
    0x7f, 0x00, 0x07, 0xf0,  // -OOOOOOO-------------OOOOOOO--..
    0x3e, 0x00, 0x03, 0xe0,  // --OOOOO---------------OOOOO---..
    0x1c, 0x00, 0x01, 0xc0,  // ---OOO-----------------OOO----..
    0x08, 0x00, 0x00, 0x80,  // ----O-------------------O-----..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..

    // ASCII: 57356, char width: 30
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x0c, 0x00, 0x01, 0x80,  // ----OO-----------------OO-----..
    0x1e, 0x00, 0x03, 0xc0,  // ---OOOO---------------OOOO----..
    0x3f, 0x00, 0x07, 0xe0,  // --OOOOOO-------------OOOOOO---..
    0x7f, 0x80, 0x0f, 0xf0,  // -OOOOOOOO-----------OOOOOOOO--..
    0x7f, 0xc0, 0x1f, 0xf0,  // -OOOOOOOOO---------OOOOOOOOO--..
    0x3f, 0xe0, 0x3f, 0xe0,  // --OOOOOOOOO-------OOOOOOOOO---..
    0x1f, 0xf0, 0x7f, 0xc0,  // ---OOOOOOOOO-----OOOOOOOOO----..
    0x0f, 0xf8, 0xff, 0x80,  // ----OOOOOOOOO---OOOOOOOOO-----..
    0x07, 0xfd, 0xff, 0x00,  // -----OOOOOOOOO-OOOOOOOOO------..
    0x03, 0xff, 0xfe, 0x00,  // ------OOOOOOOOOOOOOOOOO-------..
    0x01, 0xff, 0xfc, 0x00,  // -------OOOOOOOOOOOOOOO--------..
    0x00, 0xff, 0xf8, 0x00,  // --------OOOOOOOOOOOOO---------..
    0x00, 0x7f, 0xf0, 0x00,  // ---------OOOOOOOOOOO----------..
    0x00, 0x3f, 0xe0, 0x00,  // ----------OOOOOOOOO-----------..
    0x00, 0x1f, 0xc0, 0x00,  // -----------OOOOOOO------------..
    0x00, 0x0f, 0x80, 0x00,  // ------------OOOOO-------------..
    0x00, 0x07, 0x00, 0x00,  // -------------OOO--------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..

    // ASCII: 57357, char width: 32
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x7f, 0xff, 0xff, 0xfe,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-
    0xff, 0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xcc, 0xe6, 0x67, 0x33,  // OO--OO--OOO--OO--OO--OOO--OO--OO
    0xcc, 0xe6, 0x67, 0x33,  // OO--OO--OOO--OO--OO--OOO--OO--OO
    0xc0, 0x00, 0x00, 0x33,  // OO------------------------OO--OO
    0xc0, 0x00, 0x00, 0x33,  // OO------------------------OO--OO
    0xcf, 0x19, 0x98, 0xf3,  // OO--OOOO---OO--OO--OO---OOOO--OO
    0xcf, 0x19, 0x98, 0xf3,  // OO--OOOO---OO--OO--OO---OOOO--OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xcc, 0xff, 0xff, 0x33,  // OO--OO--OOOOOOOOOOOOOOOO--OO--OO
    0xcc, 0xff, 0xff, 0x33,  // OO--OO--OOOOOOOOOOOOOOOO--OO--OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xc0, 0x00, 0x00, 0x03,  // OO----------------------------OO
    0xff, 0xff, 0xff, 0xff,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
    0x7f, 0xff, 0xff, 0xfe,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
    0x00, 0x00, 0x00, 0x00,  // --------------------------------
};

/*Store the start index of the glyphs in the bitmap array*/
static const uint32_t symbol_30_basic_map[] = 
{
     0, 120, 240, 330, 450, 570, 690, 810, 
    900, 990, 1080, 1170, 1290, 1410, 
};

/*Store the width (column count) of each glyph*/
static const uint8_t symbol_30_basic_width[] = 
{
    30, 30, 24, 26, 26, 28, 26, 21, 
    21, 24, 24, 30, 30, 32, 
};

lv_font_t lv_font_symbol_30_basic = 
{
#if TXT_UTF8 == 0
    192,        /*First letter's unicode */
    207,        /*Last letter's unicode */
#else
    57344,        /*First letter's unicode */
    57358,        /*Last letter's unicode */
#endif
    30,        /*Letters height (rows) */
    symbol_30_basic_bitmap,    /*Glyph's bitmap*/
    symbol_30_basic_map,    /*Glyph start indexes in the bitmap*/
    symbol_30_basic_width,    /*Glyph widths (columns)*/
};

#endif /*SYMBOL_30_BASIC_H*/