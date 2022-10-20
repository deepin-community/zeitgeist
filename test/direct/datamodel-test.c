/* datamodel-test.c generated by valac 0.48.11, the Vala compiler
 * generated from datamodel-test.vala, do not modify */

/* datamodel-test.vala
 *
 * Copyright © 2012 Canonical Ltd.
 *             By Siegfried-A. Gevatter <siegfried.gevatter@collabora.co.uk>
 *             By Seif Lotfy <seif@lotfy.com>
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

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_ptr_array_unref0(var) ((var == NULL) ? NULL : (var = (g_ptr_array_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

gint _vala_main (gchar** argv,
                 gint argv_length1);
void matches_template_anything_test (void);
static void _matches_template_anything_test_gtest_func (void);
void foreach_test (void);
static void _foreach_test_gtest_func (void);
ZeitgeistSubject* create_subject (void);
ZeitgeistEvent* create_event (void);
static void _g_object_unref0_ (gpointer var);

static void
_matches_template_anything_test_gtest_func (void)
{
#line 29 "datamodel-test.vala"
	matches_template_anything_test ();
#line 53 "datamodel-test.c"
}

static void
_foreach_test_gtest_func (void)
{
#line 30 "datamodel-test.vala"
	foreach_test ();
#line 61 "datamodel-test.c"
}

gint
_vala_main (gchar** argv,
            gint argv_length1)
{
	gint result = 0;
#line 27 "datamodel-test.vala"
	g_test_init ((gint*) (&argv_length1), &argv, NULL);
#line 29 "datamodel-test.vala"
	g_test_add_func ("/Datamodel/MatchesTemplate/anything", _matches_template_anything_test_gtest_func);
#line 30 "datamodel-test.vala"
	g_test_add_func ("/Datamodel/MatchesTemplate/foreach", _foreach_test_gtest_func);
#line 32 "datamodel-test.vala"
	result = g_test_run ();
#line 32 "datamodel-test.vala"
	return result;
#line 79 "datamodel-test.c"
}

int
main (int argc,
      char ** argv)
{
#line 25 "datamodel-test.vala"
	return _vala_main (argv, argc);
#line 88 "datamodel-test.c"
}

void
matches_template_anything_test (void)
{
	ZeitgeistEvent* templ = NULL;
	ZeitgeistEvent* _tmp0_;
	ZeitgeistEvent* event = NULL;
	ZeitgeistEvent* _tmp1_;
	ZeitgeistSubject* subject = NULL;
	ZeitgeistSubject* _tmp2_;
	ZeitgeistSubject* subject2 = NULL;
	ZeitgeistSubject* _tmp3_;
#line 38 "datamodel-test.vala"
	_tmp0_ = zeitgeist_event_new_full (NULL, NULL, NULL, NULL, NULL);
#line 38 "datamodel-test.vala"
	templ = _tmp0_;
#line 39 "datamodel-test.vala"
	_tmp1_ = zeitgeist_event_new_full ("interp", "manif", "actor", "origin", NULL);
#line 39 "datamodel-test.vala"
	event = _tmp1_;
#line 42 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (templ, templ), "templ.matches_template (templ)");
#line 43 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (event, templ), "event.matches_template (templ)");
#line 45 "datamodel-test.vala"
	_tmp2_ = zeitgeist_subject_new_full (NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 45 "datamodel-test.vala"
	subject = _tmp2_;
#line 46 "datamodel-test.vala"
	zeitgeist_event_add_subject (event, subject);
#line 49 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (event, templ), "event.matches_template (templ)");
#line 51 "datamodel-test.vala"
	_tmp3_ = zeitgeist_subject_new_full ("uri", "interp", "manif", "mimetype", "origin", "text", "storage");
#line 51 "datamodel-test.vala"
	subject2 = _tmp3_;
#line 53 "datamodel-test.vala"
	zeitgeist_event_add_subject (event, subject2);
#line 56 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (event, templ), "event.matches_template (templ)");
#line 59 "datamodel-test.vala"
	zeitgeist_event_set_interpretation (templ, "");
#line 60 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (event, templ), "event.matches_template (templ)");
#line 63 "datamodel-test.vala"
	zeitgeist_event_set_actor (templ, "*");
#line 64 "datamodel-test.vala"
	_vala_assert (zeitgeist_event_matches_template (event, templ), "event.matches_template (templ)");
#line 69 "datamodel-test.vala"
	zeitgeist_event_set_manifestation (templ, "No thanks!");
#line 70 "datamodel-test.vala"
	_vala_assert (!zeitgeist_event_matches_template (event, templ), "!event.matches_template (templ)");
#line 35 "datamodel-test.vala"
	_g_object_unref0 (subject2);
#line 35 "datamodel-test.vala"
	_g_object_unref0 (subject);
#line 35 "datamodel-test.vala"
	_g_object_unref0 (event);
#line 35 "datamodel-test.vala"
	_g_object_unref0 (templ);
#line 150 "datamodel-test.c"
}

ZeitgeistSubject*
create_subject (void)
{
	ZeitgeistSubject* s = NULL;
	ZeitgeistSubject* _tmp0_;
	ZeitgeistSubject* result = NULL;
#line 75 "datamodel-test.vala"
	_tmp0_ = zeitgeist_subject_new ();
#line 75 "datamodel-test.vala"
	s = _tmp0_;
#line 76 "datamodel-test.vala"
	zeitgeist_subject_set_uri (s, "scheme:///uri");
#line 77 "datamodel-test.vala"
	zeitgeist_subject_set_interpretation (s, "subject_interpretation_uri");
#line 78 "datamodel-test.vala"
	zeitgeist_subject_set_manifestation (s, "subject_manifestation_uri");
#line 79 "datamodel-test.vala"
	zeitgeist_subject_set_mimetype (s, "text/plain");
#line 80 "datamodel-test.vala"
	zeitgeist_subject_set_origin (s, "scheme:///");
#line 81 "datamodel-test.vala"
	zeitgeist_subject_set_text (s, "Human readable text");
#line 82 "datamodel-test.vala"
	zeitgeist_subject_set_storage (s, "");
#line 83 "datamodel-test.vala"
	zeitgeist_subject_set_current_uri (s, "scheme:///uri");
#line 85 "datamodel-test.vala"
	result = s;
#line 85 "datamodel-test.vala"
	return result;
#line 183 "datamodel-test.c"
}

ZeitgeistEvent*
create_event (void)
{
	ZeitgeistEvent* e = NULL;
	ZeitgeistEvent* _tmp0_;
	ZeitgeistEvent* result = NULL;
#line 90 "datamodel-test.vala"
	_tmp0_ = zeitgeist_event_new ();
#line 90 "datamodel-test.vala"
	e = _tmp0_;
#line 91 "datamodel-test.vala"
	zeitgeist_event_set_id (e, (guint32) 1234);
#line 92 "datamodel-test.vala"
	zeitgeist_event_set_timestamp (e, (gint64) 1234567890L);
#line 93 "datamodel-test.vala"
	zeitgeist_event_set_interpretation (e, "interpretation_uri");
#line 94 "datamodel-test.vala"
	zeitgeist_event_set_manifestation (e, "manifestation_uri");
#line 95 "datamodel-test.vala"
	zeitgeist_event_set_actor (e, "test.desktop");
#line 96 "datamodel-test.vala"
	zeitgeist_event_set_origin (e, "source");
#line 98 "datamodel-test.vala"
	result = e;
#line 98 "datamodel-test.vala"
	return result;
#line 212 "datamodel-test.c"
}

static void
_g_object_unref0_ (gpointer var)
{
#line 103 "datamodel-test.vala"
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
#line 220 "datamodel-test.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 109 "datamodel-test.vala"
	return self ? g_object_ref (self) : NULL;
#line 228 "datamodel-test.c"
}

void
foreach_test (void)
{
	GPtrArray* events = NULL;
	GPtrArray* _tmp0_;
	ZeitgeistSimpleResultSet* result_set = NULL;
	GPtrArray* _tmp11_;
	ZeitgeistSimpleResultSet* _tmp12_;
	gint i = 0;
#line 103 "datamodel-test.vala"
	_tmp0_ = g_ptr_array_new_full ((guint) 0, _g_object_unref0_);
#line 103 "datamodel-test.vala"
	events = _tmp0_;
#line 244 "datamodel-test.c"
	{
		gint i = 0;
#line 104 "datamodel-test.vala"
		i = 0;
#line 249 "datamodel-test.c"
		{
			gboolean _tmp1_ = FALSE;
#line 104 "datamodel-test.vala"
			_tmp1_ = TRUE;
#line 104 "datamodel-test.vala"
			while (TRUE) {
#line 256 "datamodel-test.c"
				ZeitgeistEvent* e = NULL;
				ZeitgeistEvent* _tmp3_;
				ZeitgeistEvent* _tmp4_;
				ZeitgeistEvent* _tmp5_;
				ZeitgeistSubject* _tmp6_;
				ZeitgeistSubject* _tmp7_;
				GPtrArray* _tmp8_;
				ZeitgeistEvent* _tmp9_;
				ZeitgeistEvent* _tmp10_;
#line 104 "datamodel-test.vala"
				if (!_tmp1_) {
#line 268 "datamodel-test.c"
					gint _tmp2_;
#line 104 "datamodel-test.vala"
					_tmp2_ = i;
#line 104 "datamodel-test.vala"
					i = _tmp2_ + 1;
#line 274 "datamodel-test.c"
				}
#line 104 "datamodel-test.vala"
				_tmp1_ = FALSE;
#line 104 "datamodel-test.vala"
				if (!(i < 1000)) {
#line 104 "datamodel-test.vala"
					break;
#line 282 "datamodel-test.c"
				}
#line 106 "datamodel-test.vala"
				_tmp3_ = create_event ();
#line 106 "datamodel-test.vala"
				e = _tmp3_;
#line 107 "datamodel-test.vala"
				_tmp4_ = e;
#line 107 "datamodel-test.vala"
				zeitgeist_event_set_id (_tmp4_, (guint32) i);
#line 108 "datamodel-test.vala"
				_tmp5_ = e;
#line 108 "datamodel-test.vala"
				_tmp6_ = create_subject ();
#line 108 "datamodel-test.vala"
				_tmp7_ = _tmp6_;
#line 108 "datamodel-test.vala"
				zeitgeist_event_add_subject (_tmp5_, _tmp7_);
#line 108 "datamodel-test.vala"
				_g_object_unref0 (_tmp7_);
#line 109 "datamodel-test.vala"
				_tmp8_ = events;
#line 109 "datamodel-test.vala"
				_tmp9_ = e;
#line 109 "datamodel-test.vala"
				_tmp10_ = _g_object_ref0 (_tmp9_);
#line 109 "datamodel-test.vala"
				g_ptr_array_add (_tmp8_, _tmp10_);
#line 104 "datamodel-test.vala"
				_g_object_unref0 (e);
#line 312 "datamodel-test.c"
			}
		}
	}
#line 112 "datamodel-test.vala"
	_tmp11_ = events;
#line 112 "datamodel-test.vala"
	_tmp12_ = zeitgeist_simple_result_set_new (_tmp11_);
#line 112 "datamodel-test.vala"
	result_set = _tmp12_;
#line 113 "datamodel-test.vala"
	i = 0;
#line 324 "datamodel-test.c"
	{
		ZeitgeistResultSet* _e_it = NULL;
		ZeitgeistSimpleResultSet* _tmp13_;
		ZeitgeistResultSet* _tmp14_;
		ZeitgeistEvent* e = NULL;
#line 114 "datamodel-test.vala"
		_tmp13_ = result_set;
#line 114 "datamodel-test.vala"
		_tmp14_ = zeitgeist_result_set_iterator ((ZeitgeistResultSet*) _tmp13_);
#line 114 "datamodel-test.vala"
		_e_it = _tmp14_;
#line 114 "datamodel-test.vala"
		while (TRUE) {
#line 338 "datamodel-test.c"
			ZeitgeistResultSet* _tmp15_;
			ZeitgeistEvent* _tmp16_;
			ZeitgeistEvent* _tmp17_;
			ZeitgeistEvent* _tmp18_;
			guint32 _tmp19_;
			guint32 _tmp20_;
			gint _tmp21_;
#line 114 "datamodel-test.vala"
			_tmp15_ = _e_it;
#line 114 "datamodel-test.vala"
			_tmp16_ = zeitgeist_result_set_next_value (_tmp15_);
#line 114 "datamodel-test.vala"
			_g_object_unref0 (e);
#line 114 "datamodel-test.vala"
			e = _tmp16_;
#line 114 "datamodel-test.vala"
			_tmp17_ = e;
#line 114 "datamodel-test.vala"
			if (!(_tmp17_ != NULL)) {
#line 114 "datamodel-test.vala"
				break;
#line 360 "datamodel-test.c"
			}
#line 116 "datamodel-test.vala"
			_tmp18_ = e;
#line 116 "datamodel-test.vala"
			_tmp19_ = zeitgeist_event_get_id (_tmp18_);
#line 116 "datamodel-test.vala"
			_tmp20_ = _tmp19_;
#line 116 "datamodel-test.vala"
			g_assert_cmpint ((gint) _tmp20_, ==, i);
#line 117 "datamodel-test.vala"
			_tmp21_ = i;
#line 117 "datamodel-test.vala"
			i = _tmp21_ + 1;
#line 374 "datamodel-test.c"
		}
#line 114 "datamodel-test.vala"
		_g_object_unref0 (e);
#line 114 "datamodel-test.vala"
		_g_object_unref0 (_e_it);
#line 380 "datamodel-test.c"
	}
#line 101 "datamodel-test.vala"
	_g_object_unref0 (result_set);
#line 101 "datamodel-test.vala"
	_g_ptr_array_unref0 (events);
#line 386 "datamodel-test.c"
}

