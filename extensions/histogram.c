/* histogram.c generated by valac 0.48.11, the Vala compiler
 * generated from histogram.vala, do not modify */

/* histogram.vala
 *
 * Copyright © 2011 Michal Hruby <michal.mhr@gmail.com>
 * Copyright © 2011 Stefano Candori <stefano.candori@gmail.com>
 *
 * Based upon a Python implementation (2010-2011) by:
 *  Siegfried-Angel Gevatter Pujals <siegfried@gevatter.com>
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

#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>
#include <string.h>
#include "zeitgeist-engine.h"
#include <stdlib.h>
#include <sqlite3.h>
#include "zeitgeist-internal.h"

#define ZEITGEIST_TYPE_REMOTE_HISTOGRAM (zeitgeist_remote_histogram_get_type ())
#define ZEITGEIST_REMOTE_HISTOGRAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ZEITGEIST_TYPE_REMOTE_HISTOGRAM, ZeitgeistRemoteHistogram))
#define ZEITGEIST_IS_REMOTE_HISTOGRAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ZEITGEIST_TYPE_REMOTE_HISTOGRAM))
#define ZEITGEIST_REMOTE_HISTOGRAM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ZEITGEIST_TYPE_REMOTE_HISTOGRAM, ZeitgeistRemoteHistogramIface))

typedef struct _ZeitgeistRemoteHistogram ZeitgeistRemoteHistogram;
typedef struct _ZeitgeistRemoteHistogramIface ZeitgeistRemoteHistogramIface;

#define ZEITGEIST_TYPE_REMOTE_HISTOGRAM_PROXY (zeitgeist_remote_histogram_proxy_get_type ())
typedef GDBusProxy ZeitgeistRemoteHistogramProxy;
typedef GDBusProxyClass ZeitgeistRemoteHistogramProxyClass;
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))

#define ZEITGEIST_TYPE_HISTOGRAM (zeitgeist_histogram_get_type ())
#define ZEITGEIST_HISTOGRAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ZEITGEIST_TYPE_HISTOGRAM, ZeitgeistHistogram))
#define ZEITGEIST_HISTOGRAM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ZEITGEIST_TYPE_HISTOGRAM, ZeitgeistHistogramClass))
#define ZEITGEIST_IS_HISTOGRAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ZEITGEIST_TYPE_HISTOGRAM))
#define ZEITGEIST_IS_HISTOGRAM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ZEITGEIST_TYPE_HISTOGRAM))
#define ZEITGEIST_HISTOGRAM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ZEITGEIST_TYPE_HISTOGRAM, ZeitgeistHistogramClass))

typedef struct _ZeitgeistHistogram ZeitgeistHistogram;
typedef struct _ZeitgeistHistogramClass ZeitgeistHistogramClass;
typedef struct _ZeitgeistHistogramPrivate ZeitgeistHistogramPrivate;
enum  {
	ZEITGEIST_HISTOGRAM_0_PROPERTY,
	ZEITGEIST_HISTOGRAM_NUM_PROPERTIES
};
static GParamSpec* zeitgeist_histogram_properties[ZEITGEIST_HISTOGRAM_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_variant_type_free0(var) ((var == NULL) ? NULL : (var = (g_variant_type_free (var), NULL)))
#define _sqlite3_finalize0(var) ((var == NULL) ? NULL : (var = (sqlite3_finalize (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_variant_builder_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_builder_unref (var), NULL)))

struct _ZeitgeistRemoteHistogramIface {
	GTypeInterface parent_iface;
	GVariant* (*get_histogram_data) (ZeitgeistRemoteHistogram* self, GError** error);
};

struct _ZeitgeistHistogram {
	ZeitgeistExtension parent_instance;
	ZeitgeistHistogramPrivate * priv;
};

struct _ZeitgeistHistogramClass {
	ZeitgeistExtensionClass parent_class;
};

struct _ZeitgeistHistogramPrivate {
	guint registration_id;
};

static GType zeitgeist_remote_histogram_type_id = 0;
static gint ZeitgeistHistogram_private_offset;
static gpointer zeitgeist_histogram_parent_class = NULL;
static ZeitgeistRemoteHistogramIface * zeitgeist_histogram_zeitgeist_remote_histogram_parent_iface = NULL;
static GType zeitgeist_histogram_type_id = 0;

GType zeitgeist_remote_histogram_proxy_get_type (void) G_GNUC_CONST;
void zeitgeist_remote_histogram_proxy_register_dynamic_type (GTypeModule* module);
guint zeitgeist_remote_histogram_register_object (void* object,
                                                  GDBusConnection* connection,
                                                  const gchar* path,
                                                  GError** error);
GType zeitgeist_remote_histogram_register_type (GTypeModule * module);
GType zeitgeist_remote_histogram_get_type (void) G_GNUC_CONST;
GVariant* zeitgeist_remote_histogram_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                                         GError** error);
static void zeitgeist_remote_histogram_proxy_g_signal (GDBusProxy* proxy,
                                                const gchar* sender_name,
                                                const gchar* signal_name,
                                                GVariant* parameters);
static GVariant* zeitgeist_remote_histogram_proxy_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                                               GError** error);
static void zeitgeist_remote_histogram_proxy_zeitgeist_remote_histogram_interface_init (ZeitgeistRemoteHistogramIface* iface);
static void _dbus_zeitgeist_remote_histogram_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                                          GVariant* _parameters_,
                                                          GDBusMethodInvocation* invocation);
static void zeitgeist_remote_histogram_dbus_interface_method_call (GDBusConnection* connection,
                                                            const gchar* sender,
                                                            const gchar* object_path,
                                                            const gchar* interface_name,
                                                            const gchar* method_name,
                                                            GVariant* parameters,
                                                            GDBusMethodInvocation* invocation,
                                                            gpointer user_data);
static GVariant* zeitgeist_remote_histogram_dbus_interface_get_property (GDBusConnection* connection,
                                                                  const gchar* sender,
                                                                  const gchar* object_path,
                                                                  const gchar* interface_name,
                                                                  const gchar* property_name,
                                                                  GError** error,
                                                                  gpointer user_data);
static gboolean zeitgeist_remote_histogram_dbus_interface_set_property (GDBusConnection* connection,
                                                                 const gchar* sender,
                                                                 const gchar* object_path,
                                                                 const gchar* interface_name,
                                                                 const gchar* property_name,
                                                                 GVariant* value,
                                                                 GError** error,
                                                                 gpointer user_data);
static void _zeitgeist_remote_histogram_unregister_object (gpointer user_data);
GType zeitgeist_histogram_register_type (GTypeModule * module);
GType zeitgeist_histogram_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ZeitgeistHistogram, g_object_unref)
static void zeitgeist_histogram_real_unload (ZeitgeistExtension* base);
static GVariant* zeitgeist_histogram_real_get_histogram_data (ZeitgeistRemoteHistogram* base,
                                                       GError** error);
ZeitgeistHistogram* zeitgeist_histogram_new (void);
ZeitgeistHistogram* zeitgeist_histogram_construct (GType object_type);
static GObject * zeitgeist_histogram_constructor (GType type,
                                           guint n_construct_properties,
                                           GObjectConstructParam * construct_properties);
static void zeitgeist_histogram_finalize (GObject * obj);
GType zeitgeist_extension_register (GTypeModule* module);

static const GDBusArgInfo _zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_result = {-1, "result", "a(xu)", NULL};
static const GDBusArgInfo * const _zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_in[] = {NULL};
static const GDBusArgInfo * const _zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_out[] = {&_zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_result, NULL};
static const GDBusMethodInfo _zeitgeist_remote_histogram_dbus_method_info_get_histogram_data = {-1, "GetHistogramData", (GDBusArgInfo **) (&_zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_in), (GDBusArgInfo **) (&_zeitgeist_remote_histogram_dbus_arg_info_get_histogram_data_out), NULL};
static const GDBusMethodInfo * const _zeitgeist_remote_histogram_dbus_method_info[] = {&_zeitgeist_remote_histogram_dbus_method_info_get_histogram_data, NULL};
static const GDBusSignalInfo * const _zeitgeist_remote_histogram_dbus_signal_info[] = {NULL};
static const GDBusPropertyInfo * const _zeitgeist_remote_histogram_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _zeitgeist_remote_histogram_dbus_interface_info = {-1, "org.gnome.zeitgeist.Histogram", (GDBusMethodInfo **) (&_zeitgeist_remote_histogram_dbus_method_info), (GDBusSignalInfo **) (&_zeitgeist_remote_histogram_dbus_signal_info), (GDBusPropertyInfo **) (&_zeitgeist_remote_histogram_dbus_property_info), NULL};
static const GDBusInterfaceVTable _zeitgeist_remote_histogram_dbus_interface_vtable = {zeitgeist_remote_histogram_dbus_interface_method_call, zeitgeist_remote_histogram_dbus_interface_get_property, zeitgeist_remote_histogram_dbus_interface_set_property};

GVariant*
zeitgeist_remote_histogram_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                               GError** error)
{
	g_return_val_if_fail (self != NULL, NULL);
	return ZEITGEIST_REMOTE_HISTOGRAM_GET_INTERFACE (self)->get_histogram_data (self, error);
}

static void
zeitgeist_remote_histogram_default_init (ZeitgeistRemoteHistogramIface * iface,
                                         gpointer iface_data)
{
}

GType
zeitgeist_remote_histogram_get_type (void)
{
	return zeitgeist_remote_histogram_type_id;
}

GType
zeitgeist_remote_histogram_register_type (GTypeModule * module)
{
	static const GTypeInfo g_define_type_info = { sizeof (ZeitgeistRemoteHistogramIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) zeitgeist_remote_histogram_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	zeitgeist_remote_histogram_type_id = g_type_module_register_type (module, G_TYPE_INTERFACE, "ZeitgeistRemoteHistogram", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (zeitgeist_remote_histogram_type_id, G_TYPE_OBJECT);
	g_type_set_qdata (zeitgeist_remote_histogram_type_id, g_quark_from_static_string ("vala-dbus-proxy-type"), (void*) zeitgeist_remote_histogram_proxy_get_type);
	g_type_set_qdata (zeitgeist_remote_histogram_type_id, g_quark_from_static_string ("vala-dbus-interface-name"), "org.gnome.zeitgeist.Histogram");
	g_type_set_qdata (zeitgeist_remote_histogram_type_id, g_quark_from_static_string ("vala-dbus-interface-info"), (void*) (&_zeitgeist_remote_histogram_dbus_interface_info));
	g_type_set_qdata (zeitgeist_remote_histogram_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) zeitgeist_remote_histogram_register_object);
	return zeitgeist_remote_histogram_type_id;
}

G_DEFINE_DYNAMIC_TYPE_EXTENDED (ZeitgeistRemoteHistogramProxy, zeitgeist_remote_histogram_proxy, G_TYPE_DBUS_PROXY, 0, G_IMPLEMENT_INTERFACE_DYNAMIC (ZEITGEIST_TYPE_REMOTE_HISTOGRAM, zeitgeist_remote_histogram_proxy_zeitgeist_remote_histogram_interface_init) )
static void
zeitgeist_remote_histogram_proxy_class_init (ZeitgeistRemoteHistogramProxyClass* klass)
{
	G_DBUS_PROXY_CLASS (klass)->g_signal = zeitgeist_remote_histogram_proxy_g_signal;
}

static void
zeitgeist_remote_histogram_proxy_g_signal (GDBusProxy* proxy,
                                           const gchar* sender_name,
                                           const gchar* signal_name,
                                           GVariant* parameters)
{
}

static void
zeitgeist_remote_histogram_proxy_class_finalize (ZeitgeistRemoteHistogramProxyClass* klass)
{
}

void
zeitgeist_remote_histogram_proxy_register_dynamic_type (GTypeModule* module)
{
	zeitgeist_remote_histogram_proxy_register_type (module);
}

static void
zeitgeist_remote_histogram_proxy_init (ZeitgeistRemoteHistogramProxy* self)
{
}

static GVariant*
zeitgeist_remote_histogram_proxy_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                                     GError** error)
{
	GDBusMessage *_message;
	GVariant *_arguments;
	GVariantBuilder _arguments_builder;
	GDBusMessage *_reply_message;
	GVariant *_reply;
	GVariantIter _reply_iter;
	GVariant* _result = NULL;
	_message = g_dbus_message_new_method_call (g_dbus_proxy_get_name ((GDBusProxy *) self), g_dbus_proxy_get_object_path ((GDBusProxy *) self), "org.gnome.zeitgeist.Histogram", "GetHistogramData");
	g_variant_builder_init (&_arguments_builder, G_VARIANT_TYPE_TUPLE);
	_arguments = g_variant_builder_end (&_arguments_builder);
	g_dbus_message_set_body (_message, _arguments);
	_reply_message = g_dbus_connection_send_message_with_reply_sync (g_dbus_proxy_get_connection ((GDBusProxy *) self), _message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, g_dbus_proxy_get_default_timeout ((GDBusProxy *) self), NULL, NULL, error);
	g_object_unref (_message);
	if (!_reply_message) {
		return NULL;
	}
	if (g_dbus_message_to_gerror (_reply_message, error)) {
		g_object_unref (_reply_message);
		return NULL;
	}
	_reply = g_dbus_message_get_body (_reply_message);
	g_variant_iter_init (&_reply_iter, _reply);
	_result = g_variant_iter_next_value (&_reply_iter);
	g_object_unref (_reply_message);
	return _result;
}

static void
zeitgeist_remote_histogram_proxy_zeitgeist_remote_histogram_interface_init (ZeitgeistRemoteHistogramIface* iface)
{
	iface->get_histogram_data = zeitgeist_remote_histogram_proxy_get_histogram_data;
}

static void
_dbus_zeitgeist_remote_histogram_get_histogram_data (ZeitgeistRemoteHistogram* self,
                                                     GVariant* _parameters_,
                                                     GDBusMethodInvocation* invocation)
{
	GError* error = NULL;
	GVariantIter _arguments_iter;
	GDBusMessage* _reply_message = NULL;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	GVariant* result;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	result = zeitgeist_remote_histogram_get_histogram_data (self, &error);
	if (error) {
		g_dbus_method_invocation_return_gerror (invocation, error);
		g_error_free (error);
		return;
	}
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	g_variant_builder_add_value (&_reply_builder, result);
	_g_variant_unref0 (result);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}

static void
zeitgeist_remote_histogram_dbus_interface_method_call (GDBusConnection* connection,
                                                       const gchar* sender,
                                                       const gchar* object_path,
                                                       const gchar* interface_name,
                                                       const gchar* method_name,
                                                       GVariant* parameters,
                                                       GDBusMethodInvocation* invocation,
                                                       gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	if (strcmp (method_name, "GetHistogramData") == 0) {
		_dbus_zeitgeist_remote_histogram_get_histogram_data (object, parameters, invocation);
	} else {
		g_object_unref (invocation);
	}
}

static GVariant*
zeitgeist_remote_histogram_dbus_interface_get_property (GDBusConnection* connection,
                                                        const gchar* sender,
                                                        const gchar* object_path,
                                                        const gchar* interface_name,
                                                        const gchar* property_name,
                                                        GError** error,
                                                        gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return NULL;
}

static gboolean
zeitgeist_remote_histogram_dbus_interface_set_property (GDBusConnection* connection,
                                                        const gchar* sender,
                                                        const gchar* object_path,
                                                        const gchar* interface_name,
                                                        const gchar* property_name,
                                                        GVariant* value,
                                                        GError** error,
                                                        gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return FALSE;
}

guint
zeitgeist_remote_histogram_register_object (gpointer object,
                                            GDBusConnection* connection,
                                            const gchar* path,
                                            GError** error)
{
	guint result;
	gpointer *data;
	data = g_new (gpointer, 3);
	data[0] = g_object_ref (object);
	data[1] = g_object_ref (connection);
	data[2] = g_strdup (path);
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_zeitgeist_remote_histogram_dbus_interface_info), &_zeitgeist_remote_histogram_dbus_interface_vtable, data, _zeitgeist_remote_histogram_unregister_object, error);
	if (!result) {
		return 0;
	}
	return result;
}

static void
_zeitgeist_remote_histogram_unregister_object (gpointer user_data)
{
	gpointer* data;
	data = user_data;
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}

static inline gpointer
zeitgeist_histogram_get_instance_private (ZeitgeistHistogram* self)
{
	return G_STRUCT_MEMBER_P (self, ZeitgeistHistogram_private_offset);
}

static void
zeitgeist_histogram_real_unload (ZeitgeistExtension* base)
{
	ZeitgeistHistogram * self;
	GError* _inner_error0_ = NULL;
	self = (ZeitgeistHistogram*) base;
	{
		GDBusConnection* connection = NULL;
		GDBusConnection* _tmp0_;
		_tmp0_ = g_bus_get_sync (G_BUS_TYPE_SESSION, NULL, &_inner_error0_);
		connection = _tmp0_;
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
		if (self->priv->registration_id != ((guint) 0)) {
			g_dbus_connection_unregister_object (connection, self->priv->registration_id);
			self->priv->registration_id = (guint) 0;
		}
		_g_object_unref0 (connection);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* err = NULL;
		GError* _tmp1_;
		const gchar* _tmp2_;
		err = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp1_ = err;
		_tmp2_ = _tmp1_->message;
		g_warning ("histogram.vala:66: %s", _tmp2_);
		_g_error_free0 (err);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return;
	}
	g_debug ("histogram.vala:69: %s, this.ref_count = %u", "Zeitgeist.Histogram.unload", ((GObject*) self)->ref_count);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static GVariant*
zeitgeist_histogram_real_get_histogram_data (ZeitgeistRemoteHistogram* base,
                                             GError** error)
{
	ZeitgeistHistogram * self;
	GVariantBuilder* builder = NULL;
	GVariantType* _tmp0_;
	GVariantType* _tmp1_;
	GVariantBuilder* _tmp2_;
	GVariantBuilder* _tmp3_;
	gchar* sql = NULL;
	gchar* _tmp4_;
	sqlite3_stmt* stmt = NULL;
	ZeitgeistSQLiteDatabase* database = NULL;
	ZeitgeistEngine* _tmp5_;
	ZeitgeistEngine* _tmp6_;
	ZeitgeistSQLiteDatabase* _tmp7_;
	ZeitgeistSQLiteDatabase* _tmp8_;
	ZeitgeistSQLiteDatabase* _tmp9_;
	sqlite3* db = NULL;
	ZeitgeistSQLiteDatabase* _tmp10_;
	sqlite3* _tmp11_;
	gint rc = 0;
	sqlite3* _tmp12_;
	const gchar* _tmp13_;
	sqlite3_stmt* _tmp14_ = NULL;
	gint _tmp15_;
	ZeitgeistSQLiteDatabase* _tmp16_;
	ZeitgeistSQLiteDatabase* _tmp21_;
	GVariantBuilder* _tmp22_;
	GVariant* _tmp23_;
	GError* _inner_error0_ = NULL;
	GVariant* result = NULL;
	self = (ZeitgeistHistogram*) base;
	_tmp0_ = g_variant_type_new ("a(xu)");
	_tmp1_ = _tmp0_;
	_tmp2_ = g_variant_builder_new (_tmp1_);
	_tmp3_ = _tmp2_;
	_g_variant_type_free0 (_tmp1_);
	builder = _tmp3_;
	_tmp4_ = g_strdup ("\n" \
"                SELECT strftime('%s', datetime(timestamp/1000, 'unixep" \
"och',\n" \
"                'localtime'), 'start of day') AS daystamp,\n" \
"                COUNT(*)\n" \
"                FROM event\n" \
"                GROUP BY daystamp\n" \
"                ORDER BY daystamp DESC\n" \
"                ");
	sql = _tmp4_;
	_tmp5_ = zeitgeist_extension_get_engine ((ZeitgeistExtension*) self);
	_tmp6_ = _tmp5_;
	_tmp7_ = zeitgeist_db_reader_get_database ((ZeitgeistDbReader*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	database = _tmp9_;
	_tmp10_ = database;
	_tmp11_ = _tmp10_->database;
	db = _tmp11_;
	_tmp12_ = db;
	_tmp13_ = sql;
	_tmp15_ = sqlite3_prepare_v2 (_tmp12_, _tmp13_, -1, &_tmp14_, NULL);
	_sqlite3_finalize0 (stmt);
	stmt = _tmp14_;
	rc = _tmp15_;
	_tmp16_ = database;
	zeitgeist_sq_lite_database_assert_query_success (_tmp16_, rc, "histogram.vala:90: SQL error", SQLITE_OK, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_propagate_error (error, _inner_error0_);
		_g_object_unref0 (database);
		_sqlite3_finalize0 (stmt);
		_g_free0 (sql);
		_g_variant_builder_unref0 (builder);
		return NULL;
	}
	while (TRUE) {
		sqlite3_stmt* _tmp17_;
		gint64 t = 0LL;
		sqlite3_stmt* _tmp18_;
		guint32 count = 0U;
		sqlite3_stmt* _tmp19_;
		GVariantBuilder* _tmp20_;
		_tmp17_ = stmt;
		rc = sqlite3_step (_tmp17_);
		if (!(rc == SQLITE_ROW)) {
			break;
		}
		_tmp18_ = stmt;
		t = sqlite3_column_int64 (_tmp18_, 0);
		_tmp19_ = stmt;
		count = (guint32) sqlite3_column_int (_tmp19_, 1);
		_tmp20_ = builder;
		g_variant_builder_add (_tmp20_, "(xu)", t, count, NULL);
	}
	_tmp21_ = database;
	zeitgeist_sq_lite_database_assert_query_success (_tmp21_, rc, "Error in get_histogram_data", SQLITE_DONE, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_propagate_error (error, _inner_error0_);
		_g_object_unref0 (database);
		_sqlite3_finalize0 (stmt);
		_g_free0 (sql);
		_g_variant_builder_unref0 (builder);
		return NULL;
	}
	_tmp22_ = builder;
	_tmp23_ = g_variant_builder_end (_tmp22_);
	g_variant_ref_sink (_tmp23_);
	result = _tmp23_;
	_g_object_unref0 (database);
	_sqlite3_finalize0 (stmt);
	_g_free0 (sql);
	_g_variant_builder_unref0 (builder);
	return result;
}

ZeitgeistHistogram*
zeitgeist_histogram_construct (GType object_type)
{
	ZeitgeistHistogram * self = NULL;
	self = (ZeitgeistHistogram*) zeitgeist_extension_construct (object_type);
	return self;
}

ZeitgeistHistogram*
zeitgeist_histogram_new (void)
{
	return zeitgeist_histogram_construct (ZEITGEIST_TYPE_HISTOGRAM);
}

static GObject *
zeitgeist_histogram_constructor (GType type,
                                 guint n_construct_properties,
                                 GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	ZeitgeistHistogram * self;
	GError* _inner_error0_ = NULL;
	parent_class = G_OBJECT_CLASS (zeitgeist_histogram_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ZEITGEIST_TYPE_HISTOGRAM, ZeitgeistHistogram);
	{
		GDBusConnection* connection = NULL;
		GDBusConnection* _tmp0_;
		guint _tmp1_ = 0U;
		GDBusConnection* _tmp2_;
		guint _tmp3_;
		_tmp0_ = g_bus_get_sync (G_BUS_TYPE_SESSION, NULL, &_inner_error0_);
		connection = _tmp0_;
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp2_ = connection;
		_tmp3_ = zeitgeist_remote_histogram_register_object ((ZeitgeistRemoteHistogram*) self, _tmp2_, "/org/gnome/zeitgeist/journal/activity", &_inner_error0_);
		_tmp1_ = _tmp3_;
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			_g_object_unref0 (connection);
			goto __catch0_g_error;
		}
		self->priv->registration_id = _tmp1_;
		_g_object_unref0 (connection);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* err = NULL;
		GError* _tmp4_;
		const gchar* _tmp5_;
		err = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp4_ = err;
		_tmp5_ = _tmp4_->message;
		g_warning ("histogram.vala:49: %s", _tmp5_);
		_g_error_free0 (err);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
	}
	return obj;
}

static void
zeitgeist_histogram_class_init (ZeitgeistHistogramClass * klass,
                                gpointer klass_data)
{
	zeitgeist_histogram_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ZeitgeistHistogram_private_offset);
	((ZeitgeistExtensionClass *) klass)->unload = (void (*) (ZeitgeistExtension*)) zeitgeist_histogram_real_unload;
	G_OBJECT_CLASS (klass)->constructor = zeitgeist_histogram_constructor;
	G_OBJECT_CLASS (klass)->finalize = zeitgeist_histogram_finalize;
}

static void
zeitgeist_histogram_zeitgeist_remote_histogram_interface_init (ZeitgeistRemoteHistogramIface * iface,
                                                               gpointer iface_data)
{
	zeitgeist_histogram_zeitgeist_remote_histogram_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_histogram_data = (GVariant* (*) (ZeitgeistRemoteHistogram*, GError**)) zeitgeist_histogram_real_get_histogram_data;
}

static void
zeitgeist_histogram_instance_init (ZeitgeistHistogram * self,
                                   gpointer klass)
{
	self->priv = zeitgeist_histogram_get_instance_private (self);
	self->priv->registration_id = (guint) 0;
}

static void
zeitgeist_histogram_finalize (GObject * obj)
{
	ZeitgeistHistogram * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ZEITGEIST_TYPE_HISTOGRAM, ZeitgeistHistogram);
	G_OBJECT_CLASS (zeitgeist_histogram_parent_class)->finalize (obj);
}

GType
zeitgeist_histogram_get_type (void)
{
	return zeitgeist_histogram_type_id;
}

GType
zeitgeist_histogram_register_type (GTypeModule * module)
{
	static const GTypeInfo g_define_type_info = { sizeof (ZeitgeistHistogramClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) zeitgeist_histogram_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ZeitgeistHistogram), 0, (GInstanceInitFunc) zeitgeist_histogram_instance_init, NULL };
	static const GInterfaceInfo zeitgeist_remote_histogram_info = { (GInterfaceInitFunc) zeitgeist_histogram_zeitgeist_remote_histogram_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	zeitgeist_histogram_type_id = g_type_module_register_type (module, ZEITGEIST_TYPE_EXTENSION, "ZeitgeistHistogram", &g_define_type_info, 0);
	g_type_module_add_interface (module, zeitgeist_histogram_type_id, ZEITGEIST_TYPE_REMOTE_HISTOGRAM, &zeitgeist_remote_histogram_info);
	ZeitgeistHistogram_private_offset = sizeof (ZeitgeistHistogramPrivate);
	return zeitgeist_histogram_type_id;
}

GType
zeitgeist_extension_register (GTypeModule* module)
{
	GType result = 0UL;
	g_return_val_if_fail (module != NULL, 0UL);
	zeitgeist_remote_histogram_register_type (module);
	zeitgeist_remote_histogram_proxy_register_dynamic_type (module);
	zeitgeist_histogram_register_type (module);
	result = ZEITGEIST_TYPE_HISTOGRAM;
	return result;
}
