#ifndef COLLECTION_QT_TYPE_CONVERTER_HPP
#define COLLECTION_QT_TYPE_CONVERTER_HPP

#include "core_qt_common/i_qt_type_converter.hpp"

#include "core_dependency_system/depends.hpp"

namespace wgt
{
class IComponentContext;

/**
 *	Converts between QVariant and Collection.
 */
class CollectionQtTypeConverter : public IQtTypeConverter
	, public Depends<class IQtHelpers, class IQtFramework>
{
public:
	bool toVariant(const QVariant& qVariant, Variant& o_variant) const override;

	bool toQVariant(const Variant& variant, QVariant& o_qVariant, QObject* parent = nullptr) const override;
};
} // end namespace wgt
#endif // COLLECTION_QT_TYPE_CONVERTER_HPP
