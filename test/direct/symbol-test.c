/* symbol-test.c generated by valac 0.48.11, the Vala compiler
 * generated from symbol-test.vala, do not modify */

/* symbol-test.vala
 *
 * Copyright © 2012 Christian Dywan <christian@twotoasts.de>
 *
 * Based upon a C implementation (© 2010 Canonical Ltd) by:
 *  Michal Hruby <michal.mhr@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include "zeitgeist-datamodel.h"

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

gint _vala_main (gchar** argv,
                 gint argv_length1);
void null_null_test (void);
static void _null_null_test_gtest_func (void);
void null_first_test (void);
static void _null_first_test_gtest_func (void);
void null_second_test (void);
static void _null_second_test_gtest_func (void);
void not_uri_test (void);
static void _not_uri_test_gtest_func (void);
void not_uri_equal_test (void);
static void _not_uri_equal_test_gtest_func (void);
void uri_equal_test (void);
static void _uri_equal_test_gtest_func (void);
void vector_image_media_test (void);
static void _vector_image_media_test_gtest_func (void);
void media_vector_image_test (void);
static void _media_vector_image_test_gtest_func (void);
void media_software_test (void);
static void _media_software_test_gtest_func (void);
void media_children_test (void);
static void _media_children_test_gtest_func (void);
void media_all_children_test (void);
static void _media_all_children_test_gtest_func (void);
void vector_image_parents_test (void);
static void _vector_image_parents_test_gtest_func (void);
void media_complex_test (void);
static void _media_complex_test_gtest_func (void);
void is_uri_valid (const gchar* uri);

static void
_null_null_test_gtest_func (void)
{
#line 30 "symbol-test.vala"
	null_null_test ();
#line 73 "symbol-test.c"
}

static void
_null_first_test_gtest_func (void)
{
#line 31 "symbol-test.vala"
	null_first_test ();
#line 81 "symbol-test.c"
}

static void
_null_second_test_gtest_func (void)
{
#line 32 "symbol-test.vala"
	null_second_test ();
#line 89 "symbol-test.c"
}

static void
_not_uri_test_gtest_func (void)
{
#line 33 "symbol-test.vala"
	not_uri_test ();
#line 97 "symbol-test.c"
}

static void
_not_uri_equal_test_gtest_func (void)
{
#line 34 "symbol-test.vala"
	not_uri_equal_test ();
#line 105 "symbol-test.c"
}

static void
_uri_equal_test_gtest_func (void)
{
#line 35 "symbol-test.vala"
	uri_equal_test ();
#line 113 "symbol-test.c"
}

static void
_vector_image_media_test_gtest_func (void)
{
#line 36 "symbol-test.vala"
	vector_image_media_test ();
#line 121 "symbol-test.c"
}

static void
_media_vector_image_test_gtest_func (void)
{
#line 37 "symbol-test.vala"
	media_vector_image_test ();
#line 129 "symbol-test.c"
}

static void
_media_software_test_gtest_func (void)
{
#line 38 "symbol-test.vala"
	media_software_test ();
#line 137 "symbol-test.c"
}

static void
_media_children_test_gtest_func (void)
{
#line 39 "symbol-test.vala"
	media_children_test ();
#line 145 "symbol-test.c"
}

static void
_media_all_children_test_gtest_func (void)
{
#line 40 "symbol-test.vala"
	media_all_children_test ();
#line 153 "symbol-test.c"
}

static void
_vector_image_parents_test_gtest_func (void)
{
#line 41 "symbol-test.vala"
	vector_image_parents_test ();
#line 161 "symbol-test.c"
}

static void
_media_complex_test_gtest_func (void)
{
#line 42 "symbol-test.vala"
	media_complex_test ();
#line 169 "symbol-test.c"
}

gint
_vala_main (gchar** argv,
            gint argv_length1)
{
	gint result = 0;
#line 28 "symbol-test.vala"
	g_test_init ((gint*) (&argv_length1), &argv, NULL);
#line 30 "symbol-test.vala"
	g_test_add_func ("/Symbols/NullNull", _null_null_test_gtest_func);
#line 31 "symbol-test.vala"
	g_test_add_func ("/Symbols/NullFirst", _null_first_test_gtest_func);
#line 32 "symbol-test.vala"
	g_test_add_func ("/Symbols/NullSecond", _null_second_test_gtest_func);
#line 33 "symbol-test.vala"
	g_test_add_func ("/Symbols/NotUri", _not_uri_test_gtest_func);
#line 34 "symbol-test.vala"
	g_test_add_func ("/Symbols/NotUriEqual", _not_uri_equal_test_gtest_func);
#line 35 "symbol-test.vala"
	g_test_add_func ("/Symbols/UriEqual", _uri_equal_test_gtest_func);
#line 36 "symbol-test.vala"
	g_test_add_func ("/Symbols/ValidParent", _vector_image_media_test_gtest_func);
#line 37 "symbol-test.vala"
	g_test_add_func ("/Symbols/ValidChild", _media_vector_image_test_gtest_func);
#line 38 "symbol-test.vala"
	g_test_add_func ("/Symbols/Unrelated", _media_software_test_gtest_func);
#line 39 "symbol-test.vala"
	g_test_add_func ("/Symbols/GetChildren", _media_children_test_gtest_func);
#line 40 "symbol-test.vala"
	g_test_add_func ("/Symbols/GetAllChildren", _media_all_children_test_gtest_func);
#line 41 "symbol-test.vala"
	g_test_add_func ("/Symbols/GetParents", _vector_image_parents_test_gtest_func);
#line 42 "symbol-test.vala"
	g_test_add_func ("/Symbols/SymbolInfo", _media_complex_test_gtest_func);
#line 44 "symbol-test.vala"
	result = g_test_run ();
#line 44 "symbol-test.vala"
	return result;
#line 209 "symbol-test.c"
}

int
main (int argc,
      char ** argv)
{
#line 26 "symbol-test.vala"
	return _vala_main (argv, argc);
#line 218 "symbol-test.c"
}

void
null_null_test (void)
{
#line 50 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a ("", ""), "!Symbol.is_a (\"\", \"\")");
#line 226 "symbol-test.c"
}

void
null_first_test (void)
{
#line 55 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a ("", ZEITGEIST_NFO_MEDIA), "!Symbol.is_a (\"\", NFO.MEDIA)");
#line 234 "symbol-test.c"
}

void
null_second_test (void)
{
#line 60 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a (ZEITGEIST_NFO_MEDIA, ""), "!Symbol.is_a (NFO.MEDIA, \"\")");
#line 242 "symbol-test.c"
}

void
not_uri_test (void)
{
#line 65 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a ("first", "second"), "!Symbol.is_a (\"first\", \"second\")");
#line 250 "symbol-test.c"
}

void
not_uri_equal_test (void)
{
#line 70 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a ("something", "something"), "!Symbol.is_a (\"something\", \"something\")");
#line 258 "symbol-test.c"
}

void
uri_equal_test (void)
{
#line 75 "symbol-test.vala"
	_vala_assert (zeitgeist_symbol_is_a (ZEITGEIST_NFO_AUDIO, ZEITGEIST_NFO_AUDIO), "Symbol.is_a (NFO.AUDIO, NFO.AUDIO)");
#line 266 "symbol-test.c"
}

void
vector_image_media_test (void)
{
#line 80 "symbol-test.vala"
	_vala_assert (zeitgeist_symbol_is_a (ZEITGEIST_NFO_VECTOR_IMAGE, ZEITGEIST_NFO_MEDIA), "Symbol.is_a (NFO.VECTOR_IMAGE, NFO.MEDIA)");
#line 274 "symbol-test.c"
}

void
media_vector_image_test (void)
{
#line 85 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a (ZEITGEIST_NFO_MEDIA, ZEITGEIST_NFO_VECTOR_IMAGE), "!Symbol.is_a (NFO.MEDIA, NFO.VECTOR_IMAGE)");
#line 282 "symbol-test.c"
}

void
media_software_test (void)
{
#line 90 "symbol-test.vala"
	_vala_assert (!zeitgeist_symbol_is_a (ZEITGEIST_NFO_MEDIA, ZEITGEIST_NFO_SOFTWARE), "!Symbol.is_a (NFO.MEDIA, NFO.SOFTWARE)");
#line 290 "symbol-test.c"
}

void
is_uri_valid (const gchar* uri)
{
	gchar* SEM_D_URI = NULL;
	gchar* _tmp0_;
	gboolean _tmp1_ = FALSE;
#line 93 "symbol-test.vala"
	g_return_if_fail (uri != NULL);
#line 95 "symbol-test.vala"
	_tmp0_ = g_strdup ("http://www.semanticdesktop.org/ontologies");
#line 95 "symbol-test.vala"
	SEM_D_URI = _tmp0_;
#line 96 "symbol-test.vala"
	if (uri != NULL) {
#line 307 "symbol-test.c"
		const gchar* _tmp2_;
#line 96 "symbol-test.vala"
		_tmp2_ = SEM_D_URI;
#line 96 "symbol-test.vala"
		_tmp1_ = g_str_has_prefix (uri, _tmp2_);
#line 313 "symbol-test.c"
	} else {
#line 96 "symbol-test.vala"
		_tmp1_ = FALSE;
#line 317 "symbol-test.c"
	}
#line 96 "symbol-test.vala"
	_vala_assert (_tmp1_, "uri != null && uri.has_prefix (SEM_D_URI)");
#line 93 "symbol-test.vala"
	_g_free0 (SEM_D_URI);
#line 323 "symbol-test.c"
}

void
media_children_test (void)
{
	GList* children = NULL;
	GList* _tmp0_;
	GList* _tmp1_;
	GList* _tmp2_;
#line 102 "symbol-test.vala"
	_tmp0_ = zeitgeist_symbol_get_children (ZEITGEIST_NFO_MEDIA);
#line 102 "symbol-test.vala"
	children = _tmp0_;
#line 103 "symbol-test.vala"
	_tmp1_ = children;
#line 103 "symbol-test.vala"
	g_assert_cmpuint (g_list_length (_tmp1_), >, (guint) 0);
#line 104 "symbol-test.vala"
	_tmp2_ = children;
#line 343 "symbol-test.c"
	{
		GList* uri_collection = NULL;
		GList* uri_it = NULL;
#line 104 "symbol-test.vala"
		uri_collection = _tmp2_;
#line 104 "symbol-test.vala"
		for (uri_it = uri_collection; uri_it != NULL; uri_it = uri_it->next) {
#line 351 "symbol-test.c"
			gchar* _tmp3_;
			gchar* uri = NULL;
#line 104 "symbol-test.vala"
			_tmp3_ = g_strdup ((const gchar*) uri_it->data);
#line 104 "symbol-test.vala"
			uri = _tmp3_;
#line 358 "symbol-test.c"
			{
				const gchar* _tmp4_;
#line 105 "symbol-test.vala"
				_tmp4_ = uri;
#line 105 "symbol-test.vala"
				is_uri_valid (_tmp4_);
#line 104 "symbol-test.vala"
				_g_free0 (uri);
#line 367 "symbol-test.c"
			}
		}
	}
#line 100 "symbol-test.vala"
	(children == NULL) ? NULL : (children = (g_list_free (children), NULL));
#line 373 "symbol-test.c"
}

void
media_all_children_test (void)
{
	GList* children = NULL;
	GList* _tmp0_;
	GList* _tmp1_;
	GList* _tmp2_;
#line 110 "symbol-test.vala"
	_tmp0_ = zeitgeist_symbol_get_all_children (ZEITGEIST_NFO_MEDIA);
#line 110 "symbol-test.vala"
	children = _tmp0_;
#line 111 "symbol-test.vala"
	_tmp1_ = children;
#line 111 "symbol-test.vala"
	g_assert_cmpuint (g_list_length (_tmp1_), >, (guint) 0);
#line 112 "symbol-test.vala"
	_tmp2_ = children;
#line 393 "symbol-test.c"
	{
		GList* uri_collection = NULL;
		GList* uri_it = NULL;
#line 112 "symbol-test.vala"
		uri_collection = _tmp2_;
#line 112 "symbol-test.vala"
		for (uri_it = uri_collection; uri_it != NULL; uri_it = uri_it->next) {
#line 401 "symbol-test.c"
			gchar* _tmp3_;
			gchar* uri = NULL;
#line 112 "symbol-test.vala"
			_tmp3_ = g_strdup ((const gchar*) uri_it->data);
#line 112 "symbol-test.vala"
			uri = _tmp3_;
#line 408 "symbol-test.c"
			{
				const gchar* _tmp4_;
#line 113 "symbol-test.vala"
				_tmp4_ = uri;
#line 113 "symbol-test.vala"
				is_uri_valid (_tmp4_);
#line 112 "symbol-test.vala"
				_g_free0 (uri);
#line 417 "symbol-test.c"
			}
		}
	}
#line 108 "symbol-test.vala"
	(children == NULL) ? NULL : (children = (g_list_free (children), NULL));
#line 423 "symbol-test.c"
}

void
vector_image_parents_test (void)
{
	GList* parents = NULL;
	GList* _tmp0_;
	GList* _tmp1_;
	GList* _tmp2_;
#line 118 "symbol-test.vala"
	_tmp0_ = zeitgeist_symbol_get_all_parents (ZEITGEIST_NFO_VECTOR_IMAGE);
#line 118 "symbol-test.vala"
	parents = _tmp0_;
#line 119 "symbol-test.vala"
	_tmp1_ = parents;
#line 119 "symbol-test.vala"
	g_assert_cmpuint (g_list_length (_tmp1_), >, (guint) 0);
#line 120 "symbol-test.vala"
	_tmp2_ = parents;
#line 443 "symbol-test.c"
	{
		GList* uri_collection = NULL;
		GList* uri_it = NULL;
#line 120 "symbol-test.vala"
		uri_collection = _tmp2_;
#line 120 "symbol-test.vala"
		for (uri_it = uri_collection; uri_it != NULL; uri_it = uri_it->next) {
#line 451 "symbol-test.c"
			gchar* _tmp3_;
			gchar* uri = NULL;
#line 120 "symbol-test.vala"
			_tmp3_ = g_strdup ((const gchar*) uri_it->data);
#line 120 "symbol-test.vala"
			uri = _tmp3_;
#line 458 "symbol-test.c"
			{
				const gchar* _tmp4_;
#line 121 "symbol-test.vala"
				_tmp4_ = uri;
#line 121 "symbol-test.vala"
				is_uri_valid (_tmp4_);
#line 120 "symbol-test.vala"
				_g_free0 (uri);
#line 467 "symbol-test.c"
			}
		}
	}
#line 116 "symbol-test.vala"
	(parents == NULL) ? NULL : (parents = (g_list_free (parents), NULL));
#line 473 "symbol-test.c"
}

void
media_complex_test (void)
{
	GList* children = NULL;
	GList* _tmp0_;
	GList* all_ch = NULL;
	GList* _tmp1_;
	GList* _tmp2_;
	GList* _tmp3_;
	GList* _tmp4_;
	GList* _tmp5_;
#line 126 "symbol-test.vala"
	_tmp0_ = zeitgeist_symbol_get_children (ZEITGEIST_NFO_MEDIA);
#line 126 "symbol-test.vala"
	children = _tmp0_;
#line 127 "symbol-test.vala"
	_tmp1_ = zeitgeist_symbol_get_all_children (ZEITGEIST_NFO_MEDIA);
#line 127 "symbol-test.vala"
	all_ch = _tmp1_;
#line 129 "symbol-test.vala"
	_tmp2_ = children;
#line 129 "symbol-test.vala"
	g_assert_cmpuint (g_list_length (_tmp2_), >, (guint) 0);
#line 130 "symbol-test.vala"
	_tmp3_ = all_ch;
#line 130 "symbol-test.vala"
	_tmp4_ = children;
#line 130 "symbol-test.vala"
	g_assert_cmpuint (g_list_length (_tmp3_), >, g_list_length (_tmp4_));
#line 132 "symbol-test.vala"
	_tmp5_ = children;
#line 507 "symbol-test.c"
	{
		GList* uri_collection = NULL;
		GList* uri_it = NULL;
#line 132 "symbol-test.vala"
		uri_collection = _tmp5_;
#line 132 "symbol-test.vala"
		for (uri_it = uri_collection; uri_it != NULL; uri_it = uri_it->next) {
#line 515 "symbol-test.c"
			gchar* _tmp6_;
			gchar* uri = NULL;
#line 132 "symbol-test.vala"
			_tmp6_ = g_strdup ((const gchar*) uri_it->data);
#line 132 "symbol-test.vala"
			uri = _tmp6_;
#line 522 "symbol-test.c"
			{
				GList* _tmp7_;
				const gchar* _tmp8_;
				GCompareFunc _tmp9_;
				GList* _tmp10_;
#line 135 "symbol-test.vala"
				_tmp7_ = all_ch;
#line 135 "symbol-test.vala"
				_tmp8_ = uri;
#line 135 "symbol-test.vala"
				_tmp9_ = ((GCompareFunc) g_strcmp0);
#line 135 "symbol-test.vala"
				_tmp10_ = g_list_find_custom (_tmp7_, _tmp8_, _tmp9_);
#line 135 "symbol-test.vala"
				_vala_assert (_tmp10_ != NULL, "all_ch.find_custom (uri, strcmp) != null");
#line 132 "symbol-test.vala"
				_g_free0 (uri);
#line 540 "symbol-test.c"
			}
		}
	}
#line 124 "symbol-test.vala"
	(all_ch == NULL) ? NULL : (all_ch = (g_list_free (all_ch), NULL));
#line 124 "symbol-test.vala"
	(children == NULL) ? NULL : (children = (g_list_free (children), NULL));
#line 548 "symbol-test.c"
}

