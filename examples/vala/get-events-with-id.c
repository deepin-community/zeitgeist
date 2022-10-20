/* get-events-with-id.c generated by valac 0.48.11, the Vala compiler
 * generated from get-events-with-id.vala, do not modify */

#include <glib.h>
#include "zeitgeist.h"
#include <glib-object.h>
#include <gio/gio.h>
#include "zeitgeist-datamodel.h"
#include <stdio.h>

typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_array_unref0(var) ((var == NULL) ? NULL : (var = (g_array_unref (var), NULL)))

struct _Block1Data {
	int _ref_count_;
	GArray* ids;
	GMainLoop* loop;
	ZeitgeistLog* zg;
};

gint _vala_main (void);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (Block1Data* _data1_,
                 GObject* obj,
                 GAsyncResult* res);
static void ___lambda4__gasync_ready_callback (GObject* source_object,
                                        GAsyncResult* res,
                                        gpointer self);

static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}

static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->zg);
		_g_main_loop_unref0 (_data1_->loop);
		_g_array_unref0 (_data1_->ids);
		g_slice_free (Block1Data, _data1_);
	}
}

static void
__lambda4_ (Block1Data* _data1_,
            GObject* obj,
            GAsyncResult* res)
{
	ZeitgeistResultSet* events = NULL;
	ZeitgeistResultSet* _tmp0_;
	GError* _inner_error0_ = NULL;
	g_return_if_fail (res != NULL);
	_tmp0_ = zeitgeist_log_get_events_finish (_data1_->zg, res, &_inner_error0_);
	events = _tmp0_;
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return;
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				ZeitgeistEvent* event = NULL;
				ZeitgeistEvent* _tmp3_;
				ZeitgeistEvent* _tmp4_;
				if (!_tmp1_) {
					gint _tmp2_;
					i = i + 1;
					_tmp2_ = i;
				}
				_tmp1_ = FALSE;
				if (!(((guint) i) < zeitgeist_result_set_size (events))) {
					break;
				}
				_tmp3_ = zeitgeist_result_set_next_value (events);
				event = _tmp3_;
				_tmp4_ = event;
				if (_tmp4_ != NULL) {
					FILE* _tmp5_;
					ZeitgeistEvent* _tmp6_;
					GPtrArray* _tmp7_;
					GPtrArray* _tmp8_;
					gconstpointer _tmp9_;
					const gchar* _tmp10_;
					const gchar* _tmp11_;
					_tmp5_ = stdout;
					_tmp6_ = event;
					_tmp7_ = zeitgeist_event_get_subjects (_tmp6_);
					_tmp8_ = _tmp7_;
					_tmp9_ = g_ptr_array_index (_tmp8_, (guint) 0);
					_tmp10_ = zeitgeist_subject_get_uri ((ZeitgeistSubject*) _tmp9_);
					_tmp11_ = _tmp10_;
					fprintf (_tmp5_, "First subject: %s\n", _tmp11_);
				} else {
					FILE* _tmp12_;
					_tmp12_ = stdout;
					fprintf (_tmp12_, "Event %d doesn't exist.\n", (gint) g_array_index (_data1_->ids, guint32, (guint) i));
				}
				_g_object_unref0 (event);
			}
		}
	}
	g_main_loop_quit (_data1_->loop);
	_g_object_unref0 (events);
}

static void
___lambda4__gasync_ready_callback (GObject* source_object,
                                   GAsyncResult* res,
                                   gpointer self)
{
	__lambda4_ (self, source_object, res);
	block1_data_unref (self);
}

gint
_vala_main (void)
{
	Block1Data* _data1_;
	GArray* _tmp0_;
	guint32 id1 = 0U;
	guint32 id2 = 0U;
	GMainLoop* _tmp1_;
	ZeitgeistLog* _tmp2_;
	GArray* _tmp3_;
	gint result = 0;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_tmp0_ = g_array_new (TRUE, TRUE, sizeof (guint32));
	_data1_->ids = _tmp0_;
	id1 = (guint32) 2100000;
	id2 = (guint32) 222;
	g_array_append_val (_data1_->ids, id1);
	g_array_append_val (_data1_->ids, id2);
	_tmp1_ = g_main_loop_new (NULL, FALSE);
	_data1_->loop = _tmp1_;
	_tmp2_ = zeitgeist_log_new ();
	_data1_->zg = _tmp2_;
	_tmp3_ = _data1_->ids;
	zeitgeist_log_get_events (_data1_->zg, _tmp3_, NULL, ___lambda4__gasync_ready_callback, block1_data_ref (_data1_));
	g_main_loop_run (_data1_->loop);
	result = 0;
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}

int
main (int argc,
      char ** argv)
{
	return _vala_main ();
}
